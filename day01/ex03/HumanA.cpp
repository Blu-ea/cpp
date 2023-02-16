/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:35:05 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/16 13:43:03 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(void){}
HumanA::~HumanA(void){}

HumanA::HumanA(const std::string& name, Weapon& weapon) : name_(name), weapon_(&weapon){}

void	HumanA::attack(void) const{
	std::cout << name_ << " attack with : ";
	std::cout << weapon_->getType() << std::endl;
}