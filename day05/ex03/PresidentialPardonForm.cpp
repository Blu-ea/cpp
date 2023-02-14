/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 02:32:50 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/14 18:18:27 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 5, 25), _target ("default"){}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src), _target(src.getTarget()){}
PresidentialPardonForm::~PresidentialPardonForm(){}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 5, 25), _target(target){}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs){
	this->_target = rhs.getTarget();
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const throw(std::exception){
	
	if (!getSigned())
		throw(notSigned);
	if (executor.getGrade() > getGradeExe())
		throw(GradeTooLowException);

	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const{
	return (this->_target);
}