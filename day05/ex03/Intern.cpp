/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 00:21:34 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/17 22:11:21 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern () : FormNotFound(GradeException("Format not found")) {}
Intern::Intern (const Intern &src) : FormNotFound(GradeException("Format not found")) {
	*this = src;
}
Intern::~Intern () {}

Intern &Intern::operator=(const Intern &other) {
	(void) other;
	return *this;
}

Form *Intern::shrubberyCreation(const std::string target) const {
	return new ShrubberyCreationForm(target);
}
Form *Intern::robotomyRequest(const std::string target) const {
	return new RobotomyRequestForm(target);
}
Form *Intern::presidentialPardon(const std::string target) const {
	return new PresidentialPardonForm(target);
}


Form *Intern::makeForm(std::string name, std::string target) throw (std::exception){
	Form *formList[] = {Intern::shrubberyCreation(target),
						Intern::robotomyRequest(target),
						Intern::presidentialPardon(target)};
	std::string nameList[] = {	"shrubbery creation",
								"robotomy request",
								"presidential pardon"};

	for (int i =0; i<3; i++){
		if (name == nameList[i]){
			for (int j = i + 1; j < 3 ; j++)
				delete formList[j];
			return (formList[i]);
		}
		delete formList[i];
	}
	throw(FormNotFound);
}

