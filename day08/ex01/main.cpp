/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 01:43:40 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/27 12:39:54 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int	main(){
	std::srand(std::time(NULL));
	
	try{
	Span test(4);
	std::cout << "Max size is " << test.getSize() << std::endl;
	
		try {std::cout << "Longest Span is " << test.longestSpan() << std::endl;}
		catch (std::overflow_error &e) {std::cout << std::endl << e.what() << std::endl;}
	
	std::cout << "   =======   " << std::endl;
	
	test.addNumber(3);
	
		try {std::cout << "Longest Span is " << test.longestSpan() << std::endl;}
		catch (std::overflow_error &e) {std::cout << std::endl << e.what() << std::endl;}
	
	std::cout << "   =======   " << std::endl;
	
	test.addNumber(5);

	std::cout << "Longest Span is " << test.longestSpan() << std::endl;
	std::cout << "Sortest Span is " << test.shortestSpan() << std::endl;
	
	std::cout << "   =======   " << std::endl;
	
	test.addNumber(2);
	
	std::cout << "Longest Span is " << test.longestSpan() << std::endl;
	std::cout << "Sortest Span is " << test.shortestSpan() << std::endl;
	
	std::cout << "   =======   " << std::endl;

	test.addNumber(0);

	std::cout << "Longest Span is " << test.longestSpan() << std::endl;
	std::cout << "Sortest Span is " << test.shortestSpan() << std::endl;
	}
	catch (std::overflow_error &e){
		std::cout << e.what() << std::endl ;
	}

	std::cout << "   =========================   " << std::endl;
	
	try{

		Span test(100);

		std::vector<int> src(10);
		std::generate(src.begin(), src.end(), ::myRand);

		// test.addNumbers(src.begin(), src.end());
		// test.addNumbers();
	
		for (int i = 0; i < 10 ; i++){
			test.addNumbers(src.begin(), src.end());
		}

		std::cout << "   =======   " << std::endl;

		std::cout << "Longest Span is " << test.longestSpan() << std::endl;
		std::cout << "Sortest Span is " << test.shortestSpan() << std::endl;
	}
	catch (std::overflow_error &e){
		std::cout << e.what() << std::endl ;
	}
}
