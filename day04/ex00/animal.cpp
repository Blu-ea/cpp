/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:01:19 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/09 16:59:52 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal constructor called" << std::endl;
	return ;
}

Animal::Animal(void)
{
	std::cout << "Animal constructor called" << std::endl;
	_type = "";
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

std::string Animal::getType(void) const
{
	return (_type);
}

void Animal::makeSound() const{
	std::cout << "*insert sound of animal*" << std::endl;
}

/***********************************************/
/***********************************************/

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
	return ;
}

Cat::Cat(Cat const & src) : Animal(src.getType())
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

void Cat::makeSound() const{
	std::cout << "Mreoow~" << std::endl;
}

/***********************************************/
/***********************************************/

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
	return ;
}

Dog::Dog(Dog const & src) : Animal(src.getType()) 
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

void Dog::makeSound() const{
	std::cout << "Bark Bark" << std::endl;
}