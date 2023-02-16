/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:49:44 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/16 13:33:05 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(){}

Zombie::Zombie(std::string name) : name(name){
	announce();
}

Zombie::~Zombie(){
	std::cout << this->name << " is dead" << std::endl;
	return ;
}

void	Zombie::announce(void) const{
	std::cout << Zombie::GetName() << ": Braiiiiiiinnnssss..." << std::endl;
}

std::string Zombie::GetName() const{
	return (this->name);
}

void Zombie::SetName(std::string name){
	this->name = name;
}