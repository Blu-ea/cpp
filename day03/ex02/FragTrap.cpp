/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:45:49 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/14 15:30:52 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	setHitPoint(100);
	setNrgPoint(100);
	setAtkPoint(30);
	std::cout << "FragTrap " << this->getName() << " is born" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src){
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

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	setHitPoint(100);
	setNrgPoint(100);
	setAtkPoint(30);
	std::cout << "FragTrap " << this->getName() << " is born" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Frag Trap " << getName()  << " has positive high fives request" << std::endl;
}