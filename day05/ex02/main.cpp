/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 11:48:00 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/09 07:25:42 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


int main(){

	try {
		Bureaucrat bob("Bob", 1);
		Bureaucrat patric("Patric", 100);

		ShrubberyCreationForm paper("paper");
		PresidentialPardonForm morePaper("morePaper");
		RobotomyRequestForm moreAndMorePaper("moreAndMorePaper");

		std::cout << "=============" << std::endl;
		bob.signForm(paper);
		bob.executeForm(paper);
		std::cout << "====paper^=====" << std::endl;
		bob.signForm(morePaper);
		bob.executeForm(morePaper);
		std::cout << "====morePaper^=====" << std::endl;
		bob.signForm(moreAndMorePaper);
		bob.executeForm(moreAndMorePaper);
		std::cout << "====moreAndMorePaper^=====" << std::endl;

	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl ;
	}

}
