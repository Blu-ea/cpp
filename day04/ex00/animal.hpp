/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:57:05 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/06 10:00:43 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

# include <iostream>

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(const Animal &other);
		virtual ~Animal();
		Animal &operator=(Animal const &rhs);

		Animal(std::string type);

		std::string getType(void) const;
		virtual void makeSound(void) const;
};

class Dog : public Animal{

	public:
		Dog();
		Dog(const Dog &other);
		virtual ~Dog();
		Dog &operator=(Dog const &rhs);

		virtual void makeSound(void) const;

};

class Cat : public Animal{

	public:
		Cat();
		Cat(const Cat &other);
		virtual ~Cat();
		Cat &operator=(Cat const &rhs);

		virtual void makeSound(void) const;

};

#endif
