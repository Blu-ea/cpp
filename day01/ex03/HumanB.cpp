/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:56:09 by amiguez           #+#    #+#             */
/*   Updated: 2022/11/28 16:07:29 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void){
}

HumanB::~HumanB(void){
}

HumanB::HumanB(std::string name): name_(name), weapon_(NULL){
}

void	HumanB::attack(void)
{
	std::cout << name_ << " attack with : ";
	std::cout << weapon_->getType() << std::endl;}

void HumanB::setWeapon(Weapon& weapon)
{
	weapon_ = &weapon;
}