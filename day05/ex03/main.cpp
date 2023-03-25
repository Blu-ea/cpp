/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 11:48:00 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/09 07:29:36 by amiguez          ###   ########.fr       */
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
		
		Form *fakePaper = Intern.makeForm("making noodels", "me");
		(void) fakePaper;
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl ;
	}
}
