/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 00:52:55 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/16 03:25:50 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_HPP__
# define __SHRUBBERYCREATIONFORM_HPP__

# include"Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(); // sign 145, exec 137
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		~ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(std::string const name);

		void execute(Bureaucrat const & executor) const throw(std::exception);

};

#endif