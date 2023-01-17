/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 00:52:42 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/16 03:25:59 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_HPP__
# define __PRESIDENTIALPARDONFORM_HPP__

# include"Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(); // sign 25, exec 5
		PresidentialPardonForm(const PresidentialPardonForm &src);
		~PresidentialPardonForm();

	public:
		PresidentialPardonForm(std::string const name);

		void execute(Bureaucrat const & executor) const throw(std::exception);

};

#endif