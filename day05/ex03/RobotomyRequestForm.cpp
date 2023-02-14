/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 02:18:18 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/14 18:18:09 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 5, 25), _target("default"){}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src), _target(src.getTarget()){}
RobotomyRequestForm::~RobotomyRequestForm(){}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 5, 25), _target(target){}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs){
	this->_target = rhs.getTarget();
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const throw(std::exception){
	
	if (!getSigned())
		throw(notSigned);
	if (executor.getGrade() > getGradeExe())
		throw(GradeTooLowException);

	std::cout << "Bzzzz Bzzz *more drilling noises* vrrrrrr " << std::endl;
	srand((unsigned) time(NULL));
	int	sucess = rand() % 2;

	if (sucess)
		std::cout << getTarget() << " has been robotomized" << std::endl;
	else
		std::cout << getTarget() << " has failed his robotomization" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const{
	return (this->_target);
}
