/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:02:34 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/14 15:57:09 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : 
	ClapTrap("default_clap_name"), ScavTrap("default_clap_name"), FragTrap("default_clap_name"){
	
	this->_name = "default";

	std::cout << "DiamondTrap " << this->_name << " is born" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) :
	ClapTrap(src.getName() + "_clap_name" ), ScavTrap(src.getName() + "_clap_name" ), FragTrap(src.getName() + "_clap_name" ){

	this->_name = src.getName();
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << _name << " Died" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs){
	this->setName(rhs.getName());
	this->setAtkPoint(rhs.getAtkPoint());
	this->setHitPoint(rhs.getHitPoint());
	this->setNrgPoint(rhs.getNrgPoint());
	return (*this);
}

DiamondTrap::DiamondTrap(const std::string name) :
	ClapTrap(name+ "_clap_name" ), ScavTrap(name+ "_clap_name" ), FragTrap(name+ "_clap_name" ){
	
	this->_name = name;
	
	std::cout << "DiamondTrap " << this->_name << " is born" << std::endl;
}

std::string	DiamondTrap::getName() const{
	return this->_name;
}

void	DiamondTrap::whoAmI(){
	std::cout << "My name is " << this->_name;
	std::cout <<" and my ClapTrap name is " << this->ClapTrap::getName() << std::endl;
}