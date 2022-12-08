/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 01:50:18 by amiguez           #+#    #+#             */
/*   Updated: 2022/11/25 20:56:43 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact
{

private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string number;
	std::string darkest_secret;

public:

	Contact();
	~Contact(void);

	void		setname(std::string name);
	std::string	getname();
	void		setlastname(std::string lastname);
	std::string	getlastname();
	void		setnickname(std::string nickname);
	std::string	getnickname();
	void		setphone(std::string phone);
	std::string	getphone();
	void		setsecret(std::string secret);
	std::string	getsecret();

};

#endif