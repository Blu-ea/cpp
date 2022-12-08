/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:49:44 by amiguez           #+#    #+#             */
/*   Updated: 2022/11/25 23:23:16 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie()
{
	return ;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	announce();
	return ;
}

Zombie::~Zombie()
{
	std::cout << this->name << " is dead" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << Zombie::GetName() << ": Braiiiiiiinnnssss..." << std::endl;
}

std::string Zombie::GetName()
{
	return (this->name);
}

void Zombie::SetName(std::string name)
{
	this->name = name;
}