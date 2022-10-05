/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 01:49:56 by amiguez           #+#    #+#             */
/*   Updated: 2022/09/20 02:44:28 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOK_CLASS_HPP
# define BOOK_CLASS_HPP

# include "Contact.class.hpp"

class PhoneBook
{

public:

	PhoneBook(void);
	~PhoneBook(void);

	void	ADD(PhoneBook *Book);

	Contact	*contact[8];
	int		NbContact;

};

#endif