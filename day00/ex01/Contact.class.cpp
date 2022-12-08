/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 01:54:57 by amiguez           #+#    #+#             */
/*   Updated: 2022/11/25 22:07:14 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

/******************************/

// void	Contact::setlast(int last)
// {
// 	this->last = last;
// }

std::string Contact::getname()
{
	return (this->first_name);
}

void	Contact::setname(std::string name)
{
	this->first_name = name;
}

std::string Contact::getlastname()
{
	return (this->last_name);
}

void	Contact::setlastname(std::string lastname)
{
	this->last_name = lastname;
}

std::string Contact::getnickname()
{
	return (this->nickname);
}

void	Contact::setnickname(std::string nickname)
{
	this->nickname = nickname;
}

std::string Contact::getphone()
{
	return (this->number);
}

void	Contact::setphone(std::string number)
{
	this->number = number;
}

std::string Contact::getsecret()
{
	return (this->darkest_secret);
}

void	Contact::setsecret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}