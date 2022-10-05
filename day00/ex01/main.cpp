/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 01:47:58 by amiguez           #+#    #+#             */
/*   Updated: 2022/09/20 03:03:03 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

int	strcmp(char *s1, char *s2);

int	main(void)
{
	PhoneBook	Book;
	bool		exit = false;
	char		command[10];

	while (exit == false)
	{
		std::cin >> command;
		if (strcmp(command, (char *)"EXIT") == 0)
			exit = true;
		else if (strcmp(command, (char *)"ADD") == 0)
			Book.ADD(&Book);
		// else if (command == "SEARCH")
		// 	Book->SEARCH(Book);
		else
			std::cout << "Command not found" << std::endl;
	}
	return (0);
}

int	strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}