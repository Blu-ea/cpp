/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 02:04:28 by amiguez           #+#    #+#             */
/*   Updated: 2022/09/20 02:46:38 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	while (this->NbContact > 0)
	{
		delete this->contact[this->NbContact];
		this->NbContact--;
	}
	return ;
}

void	PhoneBook::ADD(PhoneBook *Book)
{
	if (Book->NbContact < 8)
	{
		Book->contact[Book->NbContact] = new Contact;
		Book->NbContact++;
	}
	else
		std::cout << "Phonebook is full" << std::endl;
}