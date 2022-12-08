/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:17:39 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/08 15:36:13 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap didi("Didier");

	std::cout << didi.getName() << std::endl;
	std::cout << didi.ClapTrap::getName() << std::endl;
	std::cout << didi.FragTrap::getHitPoint() << std::endl;
	std::cout << didi.ScavTrap::getNrgPoint() << std::endl;
	std::cout << didi.FragTrap::getAtkPoint() << std::endl;
	didi.ScavTrap::attack("Michel");

	didi.whoAmI();
}