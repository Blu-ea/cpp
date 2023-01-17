/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:59:26 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/14 15:21:58 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	setHitPoint(100);
	setNrgPoint(50);
	setAtkPoint(20);
	gateKeeper = false;
	std::cout << "ScavTrap " << getName() << " is born" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	setHitPoint(100);
	setNrgPoint(50);
	setAtkPoint(20);
	gateKeeper = false;
	std::cout << "ScavTrap " << getName() << " is born" << std::endl;
	
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src) {
	setHitPoint(100);
	setNrgPoint(50);
	setAtkPoint(20);
	gateKeeper = false;
	std::cout << "ScavTrap " << getName() << " is born" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << getName()<< " is dead" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs){
	this->setName(rhs.getName());
	this->setAtkPoint(rhs.getAtkPoint());
	this->setHitPoint(rhs.getHitPoint());
	this->setNrgPoint(rhs.getNrgPoint());
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAtkPoint() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(){
	if (gateKeeper == true)
		std::cout << "ScavTrap " << getName() << " is already in Gate keeper mode" << std::endl;
	else
		std::cout << "ScavTrap " << getName() << " has entered in Gate keeper mode" << std::endl;
	gateKeeper = true;
}