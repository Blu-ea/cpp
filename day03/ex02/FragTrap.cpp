/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:45:49 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/08 14:53:52 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	setHitPoint(100);
	setNrgPoint(100);
	setAtkPoint(30);
	std::cout << "FragTrap " << this->getName() << " is born" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->getName() << " is dead" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Frag Trap " << getName()  << " has positive high fives request" << std::endl;
}