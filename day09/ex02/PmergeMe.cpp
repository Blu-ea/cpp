/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 21:00:13 by amiguez           #+#    #+#             */
/*   Updated: 2023/04/03 07:52:02 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

Pmerge::Pmerge(){}
Pmerge::~Pmerge(){}
Pmerge::Pmerge(const Pmerge& src){*this = src;}
Pmerge Pmerge::operator=(const Pmerge& rhs){*this = rhs; return *this;}

Pmerge::Pmerge(char **lst) throw(std::exception){
	(void)lst;

	for (size_t i = 0; lst[i] ; i++)
	{
		int num = std::atoi(lst[i]);
		_vec.push_back(num);
		_lst.push_back(num);
	}
}



double Pmerge::sortList(){

	clock_t start = clock();
	sortL(_lst);
	clock_t stop = clock();
	double duration = static_cast<double>(stop - start) / CLOCKS_PER_SEC * 1000000;
	// std::cout << "Time taken by function: " << duration << " seconds" << std::endl;
	return duration;
}

void Pmerge::sortL(std::list<int> &lst){
	if (lst.size() == 1)
		return ;
	std::list<int>::iterator it;
	int middle = lst.size()/2;
	int i = 0;
	std::list<int> lst2;
	std::list<int> lst3;
	for (it = lst.begin(); it != lst.end(); it++){
		if (i >= middle)
			lst2.push_front(*it);
		else
			lst3.push_front(*it);
		i++;
	}
	sortL(lst2);
	sortL(lst3);

	lst = mergeL(lst2, lst3);
}

std::list<int> Pmerge::mergeL(std::list<int> lst2, std::list<int> lst3){
	
	std::list<int> nlst(lst2);	
	
	nlst.merge(lst3);
	return (nlst);
}



double Pmerge::sortVector(){
	return (_vec[0]);
}