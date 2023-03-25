/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 11:48:00 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/09 07:23:59 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){

	try {
		Form paper0("Papi 0", 50, 4);
		std::cout << paper0 << std::endl;

		// Form paper1("Papi 1", -1, 1);
		// std::cout << paper1 << std::endl;

		// Form paper2("Papi 2", 1, -1);
		// std::cout << paper2 << std::endl;
		
		// Form paper3("Papi 3", 151, 150);
		// std::cout << paper3 << std::endl;
		
		// Form paper4("Papi 4", 150, 151);
		// std::cout << paper4 << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() <<std::endl;
	}

std::cout << "==========" << std::endl;

	try {
		Bureaucrat bob("Bob", 1);
		Bureaucrat patric("Patric", 100);

		Form paper("Paper_Work", 15, 15);
		Form morePaper("More_Paper_Work", 150, 150);

		patric.signForm(morePaper); //should work
		bob.signForm(morePaper); // should throw (already signed)
		patric.signForm(paper); //should throw (grade too low)

	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

}
