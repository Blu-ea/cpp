/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 11:48:00 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/09 06:04:50 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
	try {
		Bureaucrat bob("Bob", 30);
		std::cout << bob << std::endl;
		// Bureaucrat patric("Patric", 200);
		// std::cout << patric << std::endl;
		Bureaucrat patric("Patric", -500);
		std::cout << patric << std::endl;
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl ;
	}
	std::cout << std::endl;
	std::cout << "====================" << std::endl;
	std::cout << std::endl;
	try {
		Bureaucrat bob("Bob", 2);
		std::cout << bob << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl ;
	}
	std::cout << std::endl;
	std::cout << "====================" << std::endl;
	std::cout << std::endl;
	try {
		Bureaucrat bob("Bob", 149);
		std::cout << bob << std::endl;
		bob.decrementGrade();
		std::cout << bob << std::endl;
		bob.decrementGrade();
		std::cout << bob << std::endl;
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl ;
	}
	
}
