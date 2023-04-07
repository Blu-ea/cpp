/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 18:57:32 by amiguez           #+#    #+#             */
/*   Updated: 2023/04/07 06:09:03 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv){
	if (argc <= 2){
		std::cout << "Usage : ./PmergeMe <number> [<number> ...]";
		return (1);
	}
	try{

		Pmerge tab(argv+1);
	
		
		std::cout << "Time to process a range of " << argc - 1 << " elements with std::Vector : " << tab.sortVector(100) << " us" << std::endl;
		std::cout << "Time to process a range of " << argc - 1 << " elements with std::List : " << tab.sortList(100) << " us" << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}