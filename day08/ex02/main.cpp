/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:41:24 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/27 17:50:15 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator mit = mstack.begin();
	MutantStack<int>::iterator mite = mstack.end();

	++mit;
	--mit;

	while (mit != mite){
		std::cout << *mit << std::endl;
		++mit;
	}
	std::stack<int> ms(mstack);
	
	std::cout << "==========" << std::endl;

	std::list<int> lstack;

	lstack.push_back(5);
	lstack.push_back(17);

	std::cout << lstack.back() << std::endl;
	lstack.pop_back();
	std::cout << lstack.size() << std::endl;

	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
	//[...]
	lstack.push_back(0);

	std::list<int>::iterator lit = lstack.begin();
	std::list<int>::iterator lite = lstack.end();

	++lit;
	--lit;

	while (lit != lite){
		std::cout << *lit << std::endl;
		++lit;
	}
	std::list<int> ls(lstack);
	
	
}