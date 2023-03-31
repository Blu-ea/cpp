/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:31:59 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/31 17:46:01 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv){
	if (argc != 2){
		std::cout << "Usage : ./btc [input.csv]" << std::endl;
		return (1);
	}
	(void) argv;
	try {
		BitcoinExchange data;
		data.calcValue(std::string (argv[1]));
	}
	catch (std::exception &e){std::cout << "Error: data.csv: "<< e.what() <<std::endl;}
}