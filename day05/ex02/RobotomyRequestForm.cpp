/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 02:18:18 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/16 03:36:15 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("default", 5, 25){}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src.getName(), 5, 25){}
RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form(name, 5, 25){}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const throw(std::exception){
	
	if (!getSigned())
		throw(notSigned);
	if (executor.getGrade() > getGradeExe())
		throw(GradeTooLowException);

	std::cout << "Bzzzz Bzzz *more drilling noises* vrrrrrr " << std::endl;
	srand((unsigned) time(NULL));
	int	sucess = rand() % 2;

	if (sucess)
		std::cout << getName() << " has been robotomized" << std::endl;
	else
		std::cout << getName() << " has failed his robotomization" << std::endl;
}
