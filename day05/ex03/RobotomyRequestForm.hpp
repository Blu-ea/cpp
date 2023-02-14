/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 02:09:29 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/14 18:11:44 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_HPP__
# define __ROBOTOMYREQUESTFORM_HPP__

# include"Form.hpp"

class RobotomyRequestForm : public Form
{
	private :
		std::string _target;
	public:
		RobotomyRequestForm(); // sign 72, exec 45
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
		~RobotomyRequestForm();

	public:
		RobotomyRequestForm(std::string const target);

		void execute(Bureaucrat const & executor) const throw(std::exception);

		std::string getTarget() const;
};

#endif