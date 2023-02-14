/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 00:52:55 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/14 18:11:48 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_HPP__
# define __SHRUBBERYCREATIONFORM_HPP__

# include"Form.hpp"

class ShrubberyCreationForm : public Form
{
	private :
		std::string _target;
	public:
		ShrubberyCreationForm(); // sign 145, exec 137
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
		~ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(std::string const target);

		void execute(Bureaucrat const & executor) const throw(std::exception);

		std::string getTarget() const;
};

#endif