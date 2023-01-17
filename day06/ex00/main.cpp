/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 21:58:57 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/20 09:40:51 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <limits>
#include <stdint.h>

#include <string>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

bool check_comma(std::string src){
	if (src.find('.') != std::string::npos)
		for (size_t i = src.find('.') + 1; i < src.size(); i++)
			if (src[i] >= '1' && src[i] <= '9')
				return (true);
	return (false);
}

void toInt(double input){
	if (input > INT32_MAX  || input < INT32_MIN)
		std::cout << "int: Number is out of range" << std::endl;
	else if (isnan(input))
		std::cout << "int: imposible (nan)" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(input) << std::endl;
}

void toChar(double input){

	std::cout << "char: ";
	if (input < 0 || input > 127 || isnan(input))
		std::cout << "Not in the ASCII table" << std::endl;
	else if (input < 32 || input > 126)
		std::cout << "Not printable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(input) << "'" << std::endl;
}

void toDouble(double input, std::string src){
	std::cout << "double: " << input;
	if (check_comma(src) || input == std::numeric_limits<double>::infinity() || input == -std::numeric_limits<double>::infinity() || isnan(input))
		std::cout << std::endl;
	else
		std::cout << ".0" << std::endl;
}

void toFloat(double input, char *src){
	std::cout << "float: " << static_cast<float>(input);
	if (check_comma(src) || input >= std::numeric_limits<float>::infinity() || input <= -std::numeric_limits<float>::infinity() || isnan(input))
		std::cout << "f" << std::endl;
	else
		std::cout << ".0f" << std::endl;
}

int	main(int argc, char **argv){
	if (argc != 2){
		std::cout << "The program takes only 1 parametter" << std::endl;
		return (0);
	}
	double input;
	input = std::strtold(argv[1], NULL);	

	toChar(input);
	toInt(input);
	toDouble(input, argv[1]);
	toFloat(input, argv[1]);

}