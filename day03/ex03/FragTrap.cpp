/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:45:49 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/14 15:47:31 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	setHitPoint(100);
	setNrgPoint(100);
	setAtkPoint(30);
	std::cout << "FragTrap " << this->getName() << " is born" << std::endl;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name){
	setHitPoint(100);
	setNrgPoint(100);
	setAtkPoint(30);
	std::cout << "FragTrap " << this->getName() << " is born" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->getName() << " is dead" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs){
	this->setName(rhs.getName());
	this->setAtkPoint(rhs.getAtkPoint());
	this->setHitPoint(rhs.getHitPoint());
	this->setNrgPoint(rhs.getNrgPoint());
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Frag Trap " << getName()  << " has positive high fives request" << std::endl;
}