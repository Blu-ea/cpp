/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 19:27:50 by amiguez           #+#    #+#             */
/*   Updated: 2023/04/11 11:59:47 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv){
	if (argc != 2){
		std::cout << "Usage: ./RNP <RNP expression>" << std::endl;
		return (1);
	}

	try {
		std::string sRnp(argv[1]);

		for (size_t i = 0; i < sRnp.length(); i++){
			if (sRnp[i] != ' ' && sRnp[i] != '+' && sRnp[i] != '-' && sRnp[i] != '*' && sRnp[i] != '/'){
				if (sRnp[i] < '0' || sRnp[i] > '9' ){
					throw (std::invalid_argument("Not valid caracther in RNP expression"));
				}
			}
		}

		std::cout << rpnCalculator (sRnp) << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}
