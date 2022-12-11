/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:04:48 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/09 16:52:08 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "wrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	// const WrongAnimal* k = new Cat();
	// const Animal* l = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << "====================" << std::endl;
	i->makeSound(); //will output the Cat sound!
	std::cout << "=====Cat^============" << std::endl;
	j->makeSound(); //will output the Dog sound!
	std::cout << "======Dog^===========" << std::endl;
	meta->makeSound();
	std::cout << "=====Animal^===========" << std::endl;

	delete meta;
	delete j;
	delete i;
	// delete k;
	// delete l;
	return 0;
}