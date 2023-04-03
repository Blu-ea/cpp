/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 18:57:32 by amiguez           #+#    #+#             */
/*   Updated: 2023/04/01 21:34:06 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv){
	if (argc < 2){
		std::cout << "Usage : ./PmergeMe <number> [<number> ...]";
		return (1);
	}
	
	Pmerge tab(argv+1);

	std::cout << "Time to process a range of 3000 elements with std::List : " << tab.sortList() << " us" << std::endl;
	std::cout << "Time to process a range of 3000 elements with std::Vector : " << tab.sortVector() << " us" << std::endl;

}