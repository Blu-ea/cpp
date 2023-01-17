/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:35:18 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/20 20:20:42 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(){

	std::string a = "i am a";
	std::string b = "i am b";

	std::cout << "a = " << a << " b = " << b << std::endl;
	::swap(a,b);
	std::cout << "a = " << a << " b = " << b << std::endl;

	std::cout << "min (a,b) = "  << ::min(a,b) << std::endl;
	std::cout << "max (a,b) = "  << ::max(a,b) << std::endl;

}
