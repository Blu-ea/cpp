/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:17:34 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/13 13:42:57 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name){
	std::cout << "ClapTrap " << this->_name << " is born" << std::endl;
	_hitPoint = 10;
	_nrgPoint = 10;
	_atkPoint = 0;
}

ClapTrap::ClapTrap(ClapTrap const & src) : _name(src._name){
	std::cout << "ClapTrap " << this->_name << " is born" << std::endl;
	_hitPoint = 10;
	_nrgPoint = 10;
	_atkPoint = 0;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs){
	this->_name=rhs._name;
	this->_atkPoint=rhs._atkPoint;
	this->_hitPoint=rhs._hitPoint;
	this->_nrgPoint=rhs._nrgPoint;
	return (*this);
}

/************************1*/

void ClapTrap::attack(const std::string& target){

	if (_nrgPoint == 0){
		std::cout << "ClapTrap " << _name << " is out of energy" << std::endl;
		return;
	}
	if (_hitPoint == 0){
		std::cout << "ClapTrap " << _name << " is dead" << std::endl;
		return;
	}
	_nrgPoint--;
	std::cout << "ClapTrap " << this->_name ;
	std::cout << " attacks " << target ;
	std::cout << ", causing " << this->_atkPoint <<" points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (_hitPoint == 0){
		std::cout << "ClapTrap " << _name << " is already dead" << std::endl;
		return;
	}
	if (_hitPoint < amount)
		_hitPoint = 0;
	else
		_hitPoint -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_nrgPoint == 0){
		std::cout << "ClapTrap " << _name << " is out of energy" << std::endl;
		return;
	}
	if (_hitPoint == 0){
		std::cout << "ClapTrap " << _name << " is dead" << std::endl;
		return;
	}
	_nrgPoint--;
	_hitPoint += amount;
	std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points!" << std::endl;
}
