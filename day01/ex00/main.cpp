/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:58:55 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/16 13:28:02 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	Zombie b("Bob");
	Zombie *a = newZombie("Patric");

	std::cout << "\n-- Creatiom --\n";
	
	randomChump("Alvin");
	
	std::cout << "\n-- Random Chump --\n";
	
	a->announce();
	
	delete a;
	return (0);
}