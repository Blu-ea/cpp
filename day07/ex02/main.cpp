/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:40:47 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/21 16:15:43 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	const int MaxValue = 5; 

	Array<int> testInt(MaxValue);
	int *mirrorInt = new int[MaxValue];

	for (int i = 0; i < MaxValue; i++){
		const int value = rand();
		testInt[i] = value % 5;
		mirrorInt[i] = value % 5;
	}

	for (int i = 0; i < MaxValue; i++){
		std::cout << "For  ===== i =  " << i << std::endl;
		std::cout << "Test   = " << testInt[i] << std::endl;
		std::cout << "Mirror = " << mirrorInt[i] << std::endl;
	}

	Array<char> testChar(MaxValue);
	char *mirrorChar = new char[MaxValue];

	for (int i = 0; i < MaxValue; i++){
		const int value = rand();
		testChar[i] = (value % 26) + 'a';
		mirrorChar[i] = (value % 26) + 'a';
	}

	for (int i = 0; i < MaxValue; i++){
		std::cout << "For  ===== i =  " << i << std::endl;
		std::cout << "Test   = " << testChar[i] << std::endl;
		std::cout << "Mirror = " << mirrorChar[i] << std::endl;
	}

	delete [] mirrorChar;
	delete [] mirrorInt;
	return 0;
}