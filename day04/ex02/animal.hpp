/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:57:05 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/10 17:25:17 by amiguez          ###   ########.fr       */
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
		virtual ~Animal() = 0;
		Animal &operator=(Animal const &rhs);

		Animal(std::string type);

		std::string getType(void) const;
		virtual void makeSound(void) const;
};

class Dog : public Animal{
	private:
		Brain *brain;

	public:
		Dog();
		Dog(const Dog &other);
		virtual ~Dog();
		Dog &operator=(Dog const &rhs);

		virtual void makeSound(void) const;

		std::string getIdea(int i)const;
		void setIdea(int i, std::string idea);

		void setBrain(const Brain &src);
		Brain *getBrain() const;
};

class Cat : public Animal{
	private:
		Brain *brain;

	public:
		Cat();
		Cat(const Cat &other);
		virtual ~Cat();
		Cat &operator=(Cat const &rhs);

		virtual void makeSound(void) const;

		std::string getIdea(int i)const;
		void setIdea(int i, std::string idea);

		void setBrain(const Brain &src);
		Brain *getBrain() const;
};

#endif
