/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 01:49:56 by amiguez           #+#    #+#             */
/*   Updated: 2022/11/25 22:00:07 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOK_CLASS_HPP
# define BOOK_CLASS_HPP

# include "Contact.class.hpp"

class PhoneBook
{

private:
	
	Contact	contact[8];
	int		Index;
	int		NbContact;

public:

	PhoneBook(void);
	~PhoneBook(void);

	void	ADD(PhoneBook *Book);
	void	SEARCH(PhoneBook *Book);

};

#endif
