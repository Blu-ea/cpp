/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:30:48 by amiguez           #+#    #+#             */
/*   Updated: 2022/11/28 16:07:38 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& name) : type_(name){
}

Weapon::~Weapon(){
}

const std::string& Weapon::getType(void) const {
	return (type_);
}	

void Weapon::setType(std::string type){
	type_ = type;
}
