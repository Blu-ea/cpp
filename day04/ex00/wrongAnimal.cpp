/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:46:10 by amiguez           #+#    #+#             */
/*   Updated: 2023/01/17 19:19:00 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	_type = "";
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other._type)
{
	std::cout << "WrongAnimal duplicator called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

std::string WrongAnimal::getType(void) const
{
	return (_type);
}

void WrongAnimal::makeSound() const{
	std::cout << "*insert sound of Wronganimal*" << std::endl;
}

/***********************************************/
/***********************************************/

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src.getType())
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

void WrongCat::makeSound() const{
	std::cout << "Nya" << std::endl;
}

/***********************************************/
/***********************************************/

WrongDog::WrongDog(void) : WrongAnimal("WrongDog")
{
	std::cout << "WrongDog constructor called" << std::endl;
	return ;
}

WrongDog::WrongDog(WrongDog const & src) : WrongAnimal(src.getType())
{
	std::cout << "WrongDog copy constructor called" << std::endl;
}

WrongDog::~WrongDog(void)
{
	std::cout << "WrongDog destructor called" << std::endl;
	return ;
}

WrongDog &WrongDog::operator=(WrongDog const &rhs)
{
	this->_type = rhs._type;
	std::cout << "WrongDog operator= called" << std::endl;
	return (*this) ;
}

void WrongDog::makeSound() const{
	std::cout << "woof" << std::endl;
}