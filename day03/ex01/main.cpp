/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:17:39 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/08 14:29:54 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap scav("Scav");

	scav.attack("target");

	scav.guardGate();
	scav.guardGate();

	scav.attack("target");
	scav.takeDamage(10);
	scav.beRepaired(10);
	scav.takeDamage(100);
	scav.beRepaired(5);
	std::cout << "\n\n\n";
	std::cout << "scav health : " << scav.getHitPoint() << std::endl;
	return (0);
}