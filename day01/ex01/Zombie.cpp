/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:13:53 by amiguez           #+#    #+#             */
/*   Updated: 2022/11/27 17:38:35 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie()
{
	return ;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->name << " Braiiiiiiinnnssss..." << std::endl;
	return;
}

std::string	Zombie::GetName()
{
	return (this->name);
}

void	Zombie::SetName(std::string name)
{
	this->name = name;
	return ;
}
