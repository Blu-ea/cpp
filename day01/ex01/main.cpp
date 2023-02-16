/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:11:27 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/16 13:32:35 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int j = 5;

	Zombie* horde = zombieHorde(j, "Bob");

	horde[j-1].SetName("Pas Bob");
	for (int i = 0; i < 5; i++)
		horde[i].announce();

	delete[] horde;
	return (0);
}