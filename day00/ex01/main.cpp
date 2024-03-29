/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 01:47:58 by amiguez           #+#    #+#             */
/*   Updated: 2022/11/25 22:21:34 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

int	main(void)
{
	PhoneBook	Book;
	bool		exit = false;
	std::string	command;

	while (exit == false)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, command);
		if (command == "EXIT")
			exit = true;
		else if (command == "ADD")
			Book.ADD(&Book);
		else if (command == "SEARCH")
			Book.SEARCH(&Book);
		else
			std::cout << "Command not found" << std::endl;
	}
	return (0);
}
