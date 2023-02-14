/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 11:48:00 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/14 19:41:41 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(){

	try {
		std::cout << "try ---- " << std::endl;
		Bureaucrat bob("Bob", 1);
		Bureaucrat patric("Patric", 100);

		Intern Intern;

		Form *paper = Intern.makeForm("shrubbery creation", "tree");
		Form *morePaper = Intern.makeForm("robotomy request", "bobby");
		Form *moreAndMorePaper = Intern.makeForm("presidential pardon", "criminal");
		
		std::cout << "=============" << std::endl;
		bob.signForm(*paper);
		bob.executeForm(*paper);
		std::cout << "====paper^=====" << std::endl;
		bob.signForm(*morePaper);
		bob.executeForm(*morePaper);
		std::cout << "====morePaper^=====" << std::endl;
		bob.signForm(*moreAndMorePaper);
		bob.executeForm(*moreAndMorePaper);
		std::cout << "====moreAndMorePaper^=====" << std::endl;

		delete paper;
		delete morePaper;
		delete moreAndMorePaper;
	}
	catch (std::exception & e){
		std::cout << "catch ===== " << std::endl;
		std::cout << e.what() << std::endl ;
	}
	std::cout << "===\nout throw catch\n===" << std::endl;
}
