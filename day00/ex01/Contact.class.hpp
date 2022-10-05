/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 01:50:18 by amiguez           #+#    #+#             */
/*   Updated: 2022/09/20 02:19:41 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact
{

public:

	Contact(void);
	~Contact(void);

	char first_name[255];
	char last_name[255];
	char nickname[255];
	char Number[255];
	char darkest_secret[255];
	

};

#endif