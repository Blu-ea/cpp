/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:31:41 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/21 09:30:42 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Base.hpp"

int	main(void){
	Base* random = generate();
	std::cout << "=====" << std::endl;
	identify(random);
	identify(*random);

	delete(random);
}

Base *generate(void){
	std::srand(time(NULL));
	int i = std::rand() % 3;
		std::cout << "Generated a class : ";
	if (i == 1){
		std::cout << "A" << std::endl;
		return (new A);
	}
	if (i == 2){
		std::cout << "B" << std::endl;
		return (new B);
	}
	std::cout << "C" << std::endl;
	return (new C);
}

void identify(Base *p){

	if (dynamic_cast<A*>(p))
		std::cout << "Identified by pointer a class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Identified by pointer a class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Identified by pointer a class C" << std::endl;
}

void identify(Base &p){
	try{
		A tempA = dynamic_cast<A&>(p);
		std::cout << "Identified by reference a class A" << std::endl;
	}
	catch (std::bad_cast&){}
	try{
		B tempB = dynamic_cast<B&>(p);
		std::cout << "Identified by reference a class B" << std::endl;
	}
	catch (std::bad_cast&){}
	try{
		C tempC = dynamic_cast<C&>(p);
		std::cout << "Identified by reference a class C" << std::endl;
	}
	catch (std::bad_cast&){}
}

