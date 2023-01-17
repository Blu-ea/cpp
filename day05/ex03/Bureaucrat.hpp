/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 11:16:16 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/16 03:23:20 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <fstream> 
# include <stdlib.h>

class Form;

class GradeException : public std::exception {
	private:
		std::string m_error;
	public:
		GradeException(std::string str);
		~GradeException() throw();
		const char* what() const throw ();
	};


class Bureaucrat
{
	private:
		std::string const name;
		int grade; // 1 highest to 150 lowest

	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat const &rhs);
	public:	
		Bureaucrat(std::string const &name, int grade) throw(GradeException) ;

		std::string const &getName() const;
		int getGrade() const;

		void incrementGrade() throw(GradeException); // grade--
		void decrementGrade() throw(GradeException); // grade++

		GradeException GradeTooHighException;
		GradeException GradeTooLowException;

		void signForm(Form& form);
		void executeForm(Form const & form);
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif