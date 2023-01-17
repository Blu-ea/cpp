/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:58:41 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/21 18:15:20 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(int argc, char **argv){
	
	if (argc != 1){
		std::cout << "=== char ===" << std::endl;
		iter(argv + 1, argc - 1, print);
		std::cout << std::endl;
	}
	int arrayInt[] = {2,5,6,9,75,23,0,-1,5};
	int arrayIntSize = sizeof(arrayInt)/ sizeof(arrayInt[0]);
	std::string arrayString[] = {"I am here\n", "and here\n", "mouahahaha\n"};
	int arrayStringSize = sizeof(arrayString)/sizeof(arrayString[0]);

	std::cout << "=== int ===" << std::endl;
	iter(arrayInt, arrayIntSize, print);
	std::cout << std::endl;
	std::cout << "=== string ===" << std::endl;
	iter(arrayString, arrayStringSize, print);
	std::cout << std::endl;
}