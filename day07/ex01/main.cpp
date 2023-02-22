/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:58:41 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/21 10:07:01 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(int argc, char **argv){
	
	if (argc != 1){
		std::cout << "=== char ===" << std::endl;
		iter(argv + 1, argc - 1, print);
	}
	int arrayInt[] = {2,5,6,9,75,23,0,-1,5};
	int arrayIntSize = sizeof(arrayInt)/ sizeof(arrayInt[0]);
	std::string arrayString[] = {"I am here", "and here", "mouahahaha"};
	int arrayStringSize = sizeof(arrayString)/sizeof(arrayString[0]);

	std::cout << "=== int ===" << std::endl;
	iter(arrayInt, arrayIntSize, print);

	std::cout << "=== string ===" << std::endl;
	iter(arrayString, arrayStringSize, print);
}