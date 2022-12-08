/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:02:34 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/08 15:35:33 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name) :
	ClapTrap(name+ "_clap_name" ), ScavTrap(name+ "_clap_name" ), FragTrap(name+ "_clap_name" ){
	
	this->_name = name;
	
	std::cout << "DiamondTrap " << this->_name << " is born" << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << _name << " Died" << std::endl;
}

std::string	DiamondTrap::getName(){
	return this->_name;
}

void	DiamondTrap::whoAmI(){
	std::cout << "My name is " << this->_name;
	std::cout <<" and my ClapTrap name is " << this->ClapTrap::getName() << std::endl;
}