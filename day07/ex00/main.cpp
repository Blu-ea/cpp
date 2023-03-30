/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:35:18 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/21 09:38:04 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(){
	std::cout << "===== String =========" << std::endl;
	{
		std::string a = "i am a";
		std::string b = "i am b";

		std::cout << "a = " << a << std::endl << "b = " << b << std::endl;
		::swap(a,b);
		std::cout << " ===   Swap    === " << std::endl;
		std::cout << "a = " << a << std::endl << "b = " << b << std::endl;

		std::cout << " === Min & Max === " << std::endl;
		std::cout << "min (a,b) = "  << ::min(a,b) << std::endl;
		std::cout << "max (a,b) = "  << ::max(a,b) << std::endl;
	}
	std::cout << "======  Int  ========" << std::endl;
	{
		int a = 5;
		int b = -3;

		std::cout << "a = " << a << std::endl << "b = " << b << std::endl;
		::swap(a,b);
		std::cout << " ===   Swap    === " << std::endl;
		std::cout << "a = " << a << std::endl << "b = " << b << std::endl;

		std::cout << " === Min & Max === " << std::endl;
		std::cout << "min (a,b) = "  << ::min(a,b) << std::endl;
		std::cout << "max (a,b) = "  << ::max(a,b) << std::endl;
	}
}
