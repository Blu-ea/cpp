/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 00:58:03 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/16 03:29:56 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("default", 137, 145){}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src){}
ShrubberyCreationForm::ShrubberyCreationForm(std::string const name) : Form(name, 137, 145){}
ShrubberyCreationForm::~ShrubberyCreationForm(){}


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
	std::string fileName = getName() + "_shrubbery";
	std::ofstream outfile(fileName.c_str());
	outfile << input;
}