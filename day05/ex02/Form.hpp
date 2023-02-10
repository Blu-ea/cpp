/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:06:25 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/17 00:15:01 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
# define __FORM_HPP__

#include "Bureaucrat.hpp"

class Form{
	private:
		const std::string name;
		const int gradeExe;
		const int gradeSig;
		bool isSigned;
	public:
		Form();
		Form(Form const &src);
		~Form();
	public:

		Form(std::string name, int gradeExe, int gradeSig) throw(std::exception);
	
		GradeException GradeTooHighException;
		GradeException GradeTooLowException;

		GradeException AlreadySigned;
		GradeException notSigned;

		std::string const &getName() const;
		int getGradeExe() const;
		int getGradeSig() const;
		bool getSigned() const;

		void beSigned(const Bureaucrat *bob) throw(std::exception);
		virtual void execute(Bureaucrat const & executor) const = 0;
		// virtual void beExec(const Bureaucrat *bob) const throw(std::exception) = 0;

};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif