/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:31:41 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/14 20:31:58 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Base.hpp"

int	main(void){
	Base* random = generate();
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
		std::cout << "Identified a class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Identified a class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Identified a class C" << std::endl;
}

void identify(Base &p){
	try{
		A tempA = dynamic_cast<A&>(p);
		std::cout << "Identified a class A" << std::endl;
	}
	catch (std::bad_cast&){}
	try{
		B tempB = dynamic_cast<B&>(p);
		std::cout << "Identified a class B" << std::endl;
	}
	catch (std::bad_cast&){}
	try{
		C tempC = dynamic_cast<C&>(p);
		std::cout << "Identified a class C" << std::endl;
	}
	catch (std::bad_cast&){}
}

