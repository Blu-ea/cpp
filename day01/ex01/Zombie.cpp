/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:13:53 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/16 13:34:11 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie(){}

Zombie::Zombie(std::string name): name(name){}

void	Zombie::announce(void) const{
	std::cout << this->name << ": Braiiiiiiinnnssss..." << std::endl;
}

std::string	Zombie::GetName() const{
	return (this->name);
}

void	Zombie::SetName(std::string name){
	this->name = name;
}
