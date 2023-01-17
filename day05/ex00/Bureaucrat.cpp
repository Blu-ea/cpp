/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 11:24:34 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/11 17:34:39 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150), GradeTooHighException(GradeException("The Grade is too High (under 1)")), GradeTooLowException(GradeException("The Grade is too Low (over 150)")){}
Bureaucrat::Bureaucrat(Bureaucrat const &src) : name(src.name), grade(src.grade), GradeTooHighException(GradeException("The Grade is too High (under 1)")), GradeTooLowException(GradeException("The Grade is too Low (over 150)")){}
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs){
	this->grade = rhs.grade;
	return *this;
}
Bureaucrat::~Bureaucrat(){}

/*************/

Bureaucrat::Bureaucrat(std::string const &name, int grade) throw(GradeException) : name(name), grade(grade), GradeTooHighException("The Grade is too High (under 1)"), GradeTooLowException("The Grade is too Low (over 150)"){
	if (grade < 1)
		throw (GradeTooHighException);
	if (grade > 150)
		throw (GradeTooLowException);
}

void Bureaucrat::decrementGrade() throw(GradeException) {
	if (grade == 150)
		throw(GradeTooLowException);
	grade++;
}

void Bureaucrat::incrementGrade() throw(GradeException) {
	if (grade == 1)
		throw(GradeTooHighException);
	grade--;
}

std::string const &Bureaucrat::getName() const{
	return(name);
}
int Bureaucrat::getGrade() const{
	return(grade);
}


/***************/
/***************/

GradeException::GradeException(std::string str) : m_error(str){}
GradeException::~GradeException() throw() {}

const char* GradeException::what() const throw() {
	return(m_error.c_str());
}

/**************/
std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs){
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}
