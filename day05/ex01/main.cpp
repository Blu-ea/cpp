/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 11:48:00 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/11 19:05:38 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){

	std::cout << "ahahah" << std::endl;
	try {
		std::cout << "try" << std::endl;
		Bureaucrat bob("Bob", 1);
		Bureaucrat patric("Patric", 100);

		Form paper("Paper_Work", 15, 15);
		Form morePaper("More_Paper_Work", 150, 150);

		patric.signForm(paper);
		bob.signForm(paper);
		patric.signForm(morePaper);

	}
	catch (std::exception & e){
	std::cout << "catch" << std::endl;
		std::cout << e.what() << std::endl ;
	}
	std::cout << "out throw catch" << std::endl;

}
