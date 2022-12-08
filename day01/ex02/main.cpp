/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:48:30 by amiguez           #+#    #+#             */
/*   Updated: 2022/11/27 19:05:09 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*str_ptr = &str;
	std::string	&str_ref = str;

	std::cout << "print address" << std::endl;
	std::cout << "address string:-------------------" << &str << std::endl;
	std::cout << "address string through pointer:---" << str_ptr << std::endl;
	std::cout << "address string through reference:-" << &str_ref << std::endl;

	std::cout << "print string" << std::endl;
	std::cout << "string:-------------------" << str << std::endl;
	std::cout << "string through pointer:---" << *str_ptr << std::endl;
	std::cout << "string through reference:-" << str_ref << std::endl;
	return (0);
	
}