/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:59:26 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/08 14:53:30 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	setHitPoint(100);
	setNrgPoint(50);
	setAtkPoint(20);
	gateKeeper = false;
	std::cout << "ScavTrap " << getName() << " is born" << std::endl;
	
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << getName()<< " is dead" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAtkPoint() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(){
	if (this->gateKeeper == true)
		std::cout << "ScavTrap " << getName() << " is already in Gate keeper mode" << std::endl;
	else
		std::cout << "ScavTrap " << getName() << " has entered in Gate keeper mode" << std::endl;
	this->gateKeeper = true;
}