/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 11:48:00 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/16 03:41:19 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


int main(){

	std::cout << "ahahah" << std::endl;
	try {
		std::cout << "try" << std::endl;
		Bureaucrat bob("Bob", 1);
		Bureaucrat patric("Patric", 100);

		ShrubberyCreationForm paper("paper");
		PresidentialPardonForm morePaper("morePaper");
		RobotomyRequestForm moreAndMorePaper("moreAndMorePaper");

		std::cout << "=============";
		bob.signForm(paper);
		bob.executeForm(paper);
		std::cout << "====paper^=====";
		bob.signForm(morePaper);
		bob.executeForm(morePaper);
		std::cout << "====morePaper^=====";
		bob.signForm(moreAndMorePaper);
		bob.executeForm(moreAndMorePaper);
		std::cout << "====moreAndMorePaper^=====";

	}
	catch (std::exception & e){
	std::cout << "catch" << std::endl;
		std::cout << e.what() << std::endl ;
	}
	std::cout << "out throw catch" << std::endl;

}
