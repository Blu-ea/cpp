/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:24:28 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/29 13:11:07 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int	main()
{
	std::vector<int> tVector;

	tVector.push_back(1);
	tVector.push_back(2);
	tVector.push_back(3);
	tVector.push_back(4);
	tVector.push_back(5);
	tVector.push_back(6);
	tVector.push_back(7);
	tVector.push_back(8);

	std::cout << "number 0 in place : " << easyfind(tVector, 0) << std::endl;
	std::cout << "number 1 in place : " << easyfind(tVector, 1) << std::endl;
	std::cout << "number 8 in place : " << easyfind(tVector, 8) << std::endl;
	std::cout << "number 9 in place : " << easyfind(tVector, 9) << std::endl;
	std::cout << "======\na place of -1 is not found" << std::endl;
}