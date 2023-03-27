/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:24:28 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/23 16:23:44 by amiguez          ###   ########.fr       */
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

	std::cout << "number in : " << easyfind(tVector, 0) << " place" << std::endl;
	std::cout << "number in : " << easyfind(tVector, 1) << " place" << std::endl;
	std::cout << "number in : " << easyfind(tVector, 8) << " place" << std::endl;
	std::cout << "number in : " << easyfind(tVector, 9) << " place" << std::endl;
}