/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:40:47 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/27 18:04:05 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	const int MaxValue = 5; 

	Array<int> testInt(MaxValue);
	int *mirrorInt = new int[MaxValue];
	
	std::srand (time(NULL));

	for (int i = 0; i < MaxValue; i++){
		const int value = std::rand() % 5;		// Generation of random Values int
		testInt[i] = value;
		mirrorInt[i] = value;
	}

	for (int i = 0; i < MaxValue; i++){
		std::cout << "For  ===== i =  " << i << std::endl;		// cout of values
		std::cout << "Test   = " << testInt[i] << std::endl;
		std::cout << "Mirror = " << mirrorInt[i] << std::endl;
	}

	std::cout << " ======= ======= " << std::endl;
	
	Array<char> testChar(MaxValue);
	char *mirrorChar = new char[MaxValue];

	for (int i = 0; i < MaxValue; i++){
		const int value = std::rand();			//Generation of random values char
		testChar[i] = (value % 26) + 'a';
		mirrorChar[i] = (value % 26) + 'a';
	}

	for (int i = 0; i < MaxValue; i++){
		std::cout << "For  ===== i =  " << i << std::endl;		// cout of values
		std::cout << "Test   = " << testChar[i] << std::endl;
		std::cout << "Mirror = " << mirrorChar[i] << std::endl;
	}

	delete [] mirrorChar;
	delete [] mirrorInt;
	return 0;
}