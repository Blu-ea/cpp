/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 02:04:28 by amiguez           #+#    #+#             */
/*   Updated: 2022/11/27 00:52:21 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	this->Index = -1;
	this->NbContact = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::ADD(PhoneBook *Book)
{
	std::string	temp;

	Book->Index = (Book->Index + 1) % 8;
	if (Book->NbContact < 8)
		Book->NbContact++;
	std::cout << "First name: ";
	std::getline(std::cin, temp);
	while (temp.empty())
	{
		std::cout << "Not a valid name\nFirst name: ";
		std::getline(std::cin, temp);
	}
	Book->contact[Book->Index].setname(temp);

	std::cout << "Last name: ";
	std::getline(std::cin, temp);
	while (temp.empty())
	{
		std::cout << "Not a valid last name\nLast name: ";
		std::getline(std::cin, temp);
	}
	Book->contact[Book->Index].setlastname(temp);

	std::cout << "Nickname: ";
	std::getline(std::cin, temp);
	while (temp.empty())
	{
		std::cout << "Not a valid nickname\nNickname: ";
		std::getline(std::cin, temp);
	}
	Book->contact[Book->Index].setnickname(temp);

	std::cout << "Phone number: ";
	std::getline(std::cin, temp);
	while (temp.empty())
	{
		std::cout << "Not a valid phone number\nPhone number: ";
		std::getline(std::cin, temp);
	}
	Book->contact[Book->Index].setphone(temp);

	std::cout << "Darkest secret: ";
	std::getline(std::cin, temp);
	while (temp.empty())
	{
		std::cout << "Not a valid secret\nFirst name: ";
		std::getline(std::cin, temp);
	}
	Book->contact[Book->Index].setsecret(temp);
}

void	PhoneBook::SEARCH(PhoneBook *Book)
{
	std::cout << "|===========================================|" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|==========|==========|==========|==========|" << std::endl;
	for (int i = 0; i < Book->NbContact; i++)
	{
		std::cout << "|         " << i + 1 << "|";
		if (Book->contact[i].getname().length() > 10)
			std::cout << Book->contact[i].getname().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << Book->contact[i].getname() << "|";
		if (Book->contact[i].getlastname().length() > 10)
			std::cout << Book->contact[i].getlastname().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << Book->contact[i].getlastname() << "|";
		if (Book->contact[i].getnickname().length() > 10)
			std::cout << Book->contact[i].getnickname().substr(0, 9) << ".|" << std::endl;
		else
			std::cout << std::setw(10) << Book->contact[i].getnickname() << "|" << std::endl;
	}
	std::cout << "|===========================================|" << std::endl;

	std::cout << "Enter the index of the contact you want to see: ";
	std::string temp;
	std::getline(std::cin, temp);
	if (temp.empty() || temp.length() > 1 || temp[0] < '1' || temp[0] > '8' || temp[0] - '0' > Book->NbContact)
	{
		std::cout << "Not a valid index" << std::endl;
		return ;
	}
	std::cout << "First name: " << Book->contact[temp[0] - '1'].getname() << std::endl;
	std::cout << "Last name: " << Book->contact[temp[0] - '1'].getlastname() << std::endl;
	std::cout << "Nickname: " << Book->contact[temp[0] - '1'].getnickname() << std::endl;
	std::cout << "Phone number: " << Book->contact[temp[0] - '1'].getphone() << std::endl;
	std::cout << "Darkest secret: " << Book->contact[temp[0] - '1'].getsecret() << std::endl;

}
