/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 11:48:00 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/11 17:36:48 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){

	std::cout << "ahahah" << std::endl;
	try {
	std::cout << "try" << std::endl;
		Bureaucrat bob("Bob", 30);
		// Bureaucrat patric("Patric", 200);
		Bureaucrat patric("Patric", -500);
	}
	catch (std::exception & e){
	std::cout << "catch" << std::endl;
		std::cout << e.what() << std::endl ;
	}
	std::cout << "out throw catch" << std::endl;

}
