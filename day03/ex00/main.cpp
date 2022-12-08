/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:17:39 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/08 14:27:23 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap("Clapy");
	clap.attack("target");
	clap.takeDamage(5);
	clap.beRepaired(2);

	std::cout << "\n\n\n";

	ClapTrap clap2(clap);
	clap2.attack("target");
	clap2.takeDamage(15);
	clap2.beRepaired(2);
	return (0);
}