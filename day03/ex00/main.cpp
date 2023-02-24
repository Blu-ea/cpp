/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:17:39 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/24 11:08:44 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap("Clapy");
	clap.attack("target");
	clap.takeDamage(5);
	clap.beRepaired(2);

	std::cout << "======" << std::endl;

	ClapTrap clap2(clap);
	clap2.attack("target");
	clap2.takeDamage(15);
	clap2.beRepaired(2);

	clap2 = clap;
	return (0);
}