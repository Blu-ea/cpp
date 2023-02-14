/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 00:58:03 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/14 18:17:40 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreation", 137, 145), _target("default"){}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src), _target(src.getTarget()){}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("ShrubberyCreation", 137, 145), _target(target){}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs){
	this->_target = rhs.getTarget();
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const throw(std::exception){

	if (!getSigned())
		throw(notSigned);
	if (executor.getGrade() > getGradeExe())
		throw(GradeTooLowException);

	std::string input;

	input += "    *\n";
	input += "   ***\n";
	input += "  *****\n";
	input += " *******\n";
	input += "*********\n";
	input += "    ||\n";
	input += "    ||\n";
	input += "    ||\n";
	std::string fileName = getTarget() + "_shrubbery";
	std::ofstream outfile(fileName.c_str());
	outfile << input;
}

std::string ShrubberyCreationForm::getTarget()const {
	return (this->_target);
}