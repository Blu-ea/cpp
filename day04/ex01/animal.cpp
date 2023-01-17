/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:01:19 by amiguez           #+#    #+#             */
/*   Updated: 2023/01/17 19:30:23 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "brain.hpp"

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

Animal::Animal(const Animal &other) : _type(other._type)
{
	std::cout << "Animal duplicator called" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
	this->_type = rhs._type;
	std::cout << "Dog operator= called" << std::endl;
	return (*this) ;
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
	brain = new Brain();
	return ;
}

Cat::Cat(Cat const & src) : Animal(src.getType())
{
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain(*src.brain);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
	return ;
}

Cat &Cat::operator=(Cat const &rhs)
{
	this->_type = rhs._type;
	std::cout << "Cat operator= called" << std::endl;
	return (*this);
}

void Cat::makeSound() const{
	std::cout << "Mreoow~" << std::endl;
}

std::string Cat::getIdea(int i) const{
	return (brain->getIdea(i));
}

void Cat::setIdea(int i, std::string idea){
	brain->setIdea(i, idea);
}

/***********************************************/
/***********************************************/

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
	brain = new Brain();
	return ;
}

Dog::Dog(Dog const & src) : Animal(src.getType())
{
	std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain(*src.brain);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
	return ;
}

Dog &Dog::operator=(Dog const &rhs)
{
	this->_type = rhs._type;
	std::cout << "Dog operator= called" << std::endl;
	return (*this) ;
}

void Dog::makeSound() const{
	std::cout << "Bark Bark" << std::endl;
}

std::string Dog::getIdea(int i) const{
	return (brain->getIdea(i));
}

void Dog::setIdea(int i, std::string idea){
	brain->setIdea(i, idea);
}
