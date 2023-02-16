/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 03:42:09 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/16 20:07:18 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	info();
}
void	Harl::info( void ){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	warning();
}
void	Harl::warning( void ){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month." << std::endl;
	error();
}
void	Harl::error( void ){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl(){
	this->ptr[0] = &Harl::debug;
	this->ptr[1] = &Harl::info;
	this->ptr[2] = &Harl::warning;
	this->ptr[3] = &Harl::error;
}

void	Harl::complain(const std::string level ){

	int i = 0;
	std::string list[4] = {"debug", "info", "warning", "error"};
	while (i < 4){
		if (level == list[i])
			break;
		i++;
	}
	switch (i){
	case 0:
		debug();
		break;
	case 1:
		info();
		break;
	case 2:
		warning();
		break;
	case 3:
		error();
		break;
	default :
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
