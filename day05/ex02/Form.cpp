/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:49:40 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/14 17:48:14 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), gradeExe(150), gradeSig(150), isSigned(false),
	GradeTooHighException(GradeException("The Grade is too High")),
	GradeTooLowException(GradeException("The Grade is too Low")),
	AlreadySigned(GradeException("The Form is already signed")),
	notSigned(GradeException("The Form is not signed")){}

Form::Form(Form const &src) : name(src.name), gradeExe(src.gradeExe), gradeSig(src.gradeSig), isSigned(src.isSigned),
	GradeTooHighException(GradeException("The Grade is too High")),
	GradeTooLowException(GradeException("The Grade is too Low")),
	AlreadySigned(GradeException("The Form is already signed")),
	notSigned(GradeException("The Form is not signed")){}
Form::~Form(){}

Form	&Form::operator=(Form const &rhs){
	this->isSigned = rhs.getSigned();
	return *this;
}

/**************************************/
/**************************************/

Form::Form(std::string name, int gradeExe, int gradeSig) throw(std::exception) : name(name), gradeExe(gradeExe), gradeSig(gradeSig), isSigned(false),
	GradeTooHighException(GradeException("The Grade is too High")),
	GradeTooLowException(GradeException("The Grade is too Low")),
	AlreadySigned(GradeException("The Form is already signed")),
	notSigned(GradeException("The Form is not signed")){
		if (gradeSig < 1)
			throw (GradeTooHighException);
		if (gradeSig > 150)
			throw (GradeTooLowException);
		if (gradeExe < 1)
			throw (GradeTooHighException);
		if (gradeExe > 150)
			throw (GradeTooLowException);
	}


/**************************************/
/**************************************/

std::string const &Form::getName() const{
	return(name);
}
int Form::getGradeExe() const{
	return (gradeExe);
}
int Form::getGradeSig() const{
	return(gradeSig);
}
bool Form::getSigned() const{
	return(isSigned);
}


void Form::beSigned(const Bureaucrat *bob) throw(std::exception){
	if (bob->getGrade() > gradeSig)
		throw (GradeTooLowException);
	if (isSigned == true)
		throw (AlreadySigned);
	isSigned = true;
}

/**************************************/
/**************************************/

std::ostream &operator<<(std::ostream &o, Form const &rhs){
	o << rhs.getName() << ", Form grade " << rhs.getGradeSig() << " to signe and grade " << rhs.getGradeExe() << " to execute";
	return (o);
}

