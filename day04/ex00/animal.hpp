/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:57:05 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/09 18:07:23 by amiguez          ###   ########.fr       */
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
		Animal(std::string type);
		Animal(void);
		virtual ~Animal(void);
		std::string getType(void) const;
		virtual void makeSound(void) const;
};

class Dog : public Animal{

	public:
		Dog(void);
		Dog(const Dog &other);
		virtual ~Dog(void);
		virtual void makeSound(void) const;

};

class Cat : public Animal{

	public:
		Cat(void);
		Cat(const Cat &other);
		virtual ~Cat(void);
		virtual void makeSound(void) const;

};

// class Animal
// {
// 	private:
// 		std::string _type = "";
// public:
// 		Animal();
// 		Animal(std::string _type);
// 		Animal(const Animal& _copy);
// 		virtual ~Animal(void);
// public:
// 		std::string getType(void) const;
// 		virtual void makeSound(void) const;
// };

// class Dog : public Animal{
// 	public:
// 		Dog();
// 		Dog(const Dog &other);
// 	   ~Dog() override;
// 		void makeSound() const override;
// };

// class Cat : public Animal{
// 	public:
// 		Cat();
// 		Cat(const Cat &other);
// 		~Cat() override;
// 		void makeSound() const override;
// };

#endif
