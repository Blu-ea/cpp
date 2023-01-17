/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 00:09:19 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/17 22:12:49 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_HPP__
# define __INTERN_HPP__

# include "Form.hpp"

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern{
	private :
	public :
		Intern();
		Intern(Intern const &src);
		~Intern();
		Intern &operator=(const Intern &other);

		Form *shrubberyCreation(const std::string target)const ;
		Form *robotomyRequest(const std::string target)const ;
		Form *presidentialPardon(const std::string target)const ;
		Form *makeForm(std::string name, std::string target) throw (std::exception);
		
		GradeException FormNotFound;
};

#endif