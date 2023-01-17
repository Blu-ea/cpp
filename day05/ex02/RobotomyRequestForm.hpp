/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 02:09:29 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/16 03:25:55 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_HPP__
# define __ROBOTOMYREQUESTFORM_HPP__

# include"Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(); // sign 72, exec 45
		RobotomyRequestForm(const RobotomyRequestForm &src);
		~RobotomyRequestForm();

	public:
		RobotomyRequestForm(std::string const name);

		void execute(Bureaucrat const & executor) const throw(std::exception);

};

#endif