/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 00:52:42 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/14 18:13:59 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_HPP__
# define __PRESIDENTIALPARDONFORM_HPP__

# include"Form.hpp"

class PresidentialPardonForm : public Form
{
	private :
		std::string _target;
	public:
		PresidentialPardonForm(); // sign 25, exec 5
		PresidentialPardonForm(const PresidentialPardonForm &src);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
		~PresidentialPardonForm();

	public:
		PresidentialPardonForm(std::string const target);

		void execute(Bureaucrat const & executor) const throw(std::exception);

		std::string getTarget() const;
};

#endif