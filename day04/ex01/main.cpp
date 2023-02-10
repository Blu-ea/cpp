/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:04:48 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/10 17:27:03 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"
#include "animal.hpp"
#include <string>

int main()
{
	Animal* array_animal[10];
	for(int i = 0; i < 10; ++i) {
		if (i < 5)
			array_animal[i] = new Dog();
		else
			array_animal[i] = new Cat();
	}
	std::cout << std::endl;
	for(int i = 0; i < 10; i++){
		array_animal[i]->makeSound();
	}
	std::cout << std::endl;
	for(int i = 0; i < 10; ++i) {
		delete array_animal[i];
	}

	std::cout << "====********====" << std::endl;

	Dog* dog = new Dog();
	Cat* cat = new Cat();

	std::cout << "====*********====" << std::endl;

	for (int i = 0; i < 100; i++){
		cat->setIdea(i, "Meow");
		dog->setIdea(i, "OUAF");
	}

	

	std::cout << "=========" << std::endl;

	Cat* cat2 = new Cat(*cat);
	Dog* dog2 = new Dog(*dog);

	std::cout << "==== Cat Ideas =====" << std::endl;
	for (int i = 0; i < 100; i++){
		std::cout << "Cat: " << cat2->getIdea(i) << " " << i << std::endl;
	}
	std::cout << "==== Dog Ideas =====" << std::endl;
	for (int i = 0; i < 100; i++){
		std::cout << "Dog: " << dog2->getIdea(i) << " " << i << std::endl;
	}
	cat2->setBrain(*dog2->getBrain());
	std::cout << "==== Cat Inspired by doggo Ideas =====" << std::endl;
	for (int i = 0; i < 100; i++){
		std::cout << "Cat: " << cat2->getIdea(i) << " " << i << std::endl;
	}

	delete dog;
	delete cat;
	delete cat2;
	delete dog2;
	return (0);
}