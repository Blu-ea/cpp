/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:31:41 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/20 12:42:01 by amiguez          ###   ########.fr       */
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
	std::cout << i << std::endl;
	if (i == 1)
		return (new A);
	if (i == 2)
		return (new B);
	return (new C);
}

void identify(Base *p){

	if (dynamic_cast<A*>(p))
		std::cout << "This is a class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "This is a class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "This is a class C" << std::endl;
}

void identify(Base &p){
	try{
		A tempA = dynamic_cast<A&>(p);
		std::cout << "This is a class A" << std::endl;
	}
	catch (std::bad_cast&){}
	try{
		B tempB = dynamic_cast<B&>(p);
		std::cout << "This is a class B" << std::endl;
	}
	catch (std::bad_cast&){}
	try{
		C tempC = dynamic_cast<C&>(p);
		std::cout << "This is a class C" << std::endl;
	}
	catch (std::bad_cast&){}
}

