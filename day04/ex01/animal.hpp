/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:57:05 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/06 11:03:11 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

# include "brain.hpp"
# include <iostream>

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(const Animal &other);
		virtual ~Animal(void);
		Animal &operator=(Animal const &rhs);
		
		Animal(std::string type);
		
		std::string getType(void) const;
		virtual void makeSound(void) const;
};

class Dog : public Animal{
	private:
		Brain *brain;

	public:
		Dog(void);
		Dog(const Dog &other);
		~Dog(void);
		Dog &operator=(Dog const &rhs);

		void makeSound(void) const;

		std::string getIdea(int i)const;
		void setIdea(int i, std::string idea);

		void setBrain(const Brain &src);
		Brain *getBrain() const;
};

class Cat : public Animal{
	private:
		Brain *brain;

	public:
		Cat(void);
		Cat(const Cat &other);
		virtual ~Cat(void);
		Cat &operator=(Cat const &rhs);

		virtual void makeSound(void) const;

		std::string getIdea(int i)const;
		void setIdea(int i, std::string idea);

		void setBrain(const Brain &src);
		Brain *getBrain() const;

};

#endif
