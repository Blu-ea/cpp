/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 21:00:13 by amiguez           #+#    #+#             */
/*   Updated: 2023/04/04 03:55:49 by amiguez          ###   ########.fr       */
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
		char *temp;
		double num = strtod(lst[i], &temp);
		if (*temp)
			throw(std::out_of_range("unautorized element in list"));
		if (num < 0)
			throw(std::out_of_range("number is under 0"));
		if (num > 2147483647)
			throw(std::out_of_range("number is over int max"));
		if (std::find(_vec.begin(), _vec.end(), num) == _vec.end()){
			_vec.push_back(num);
			_lst.push_back(num);
		}
		else 
			throw(std::out_of_range("Duplicate present"));
	}

	size_t MAX_AMOUNT = 15;

	std::cout << "before : " ;
	size_t i;
	std::cout << lst[0] << ", ";
	for (i = 1; lst[i] && i < MAX_AMOUNT ; i++){
		std::cout << lst[i];
		if (lst[i + 1])
			std::cout << ", ";
	}
	if (i == MAX_AMOUNT && lst[i])
		std::cout << "[...]";
	std::cout << std::endl;
	
	std::cout << "after  : " ;
	std::vector<int> temp(_vec);
	std::sort(temp.begin(), temp.end());
	std::cout << temp[0] << ", ";
	for (i = 1; i < temp.size() && i < MAX_AMOUNT ; i++){
		std::cout << temp[i];
		if (i + 1 != temp.size())
			std::cout << ", ";
	}
	if (i == MAX_AMOUNT && i != temp.size())
		std::cout << "[...]";
	std::cout << std::endl;
}



double Pmerge::sortList(){

	clock_t start = clock();
	sortL(_lst);
	clock_t stop = clock();
	double duration = static_cast<double>(stop - start) / CLOCKS_PER_SEC * 1000000;
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

	// std::cout << "============= end ========" << std::endl; // To show that the container is sorted
	// for (std::list<int>::iterator it = lst.begin(); it != lst.end();it++)
	// 	std::cout << *it << std::endl;
}

std::list<int> Pmerge::mergeL(std::list<int> lst2, std::list<int> lst3){
	
	std::list<int> nlst(lst2);	
	
	nlst.merge(lst3);
	return (nlst);
}



double Pmerge::sortVector(){
	clock_t start = clock();
	sortV(_vec);
	clock_t stop = clock();
	double duration = static_cast<double>(stop - start) / CLOCKS_PER_SEC * 1000000;
	return duration;
}

void Pmerge::sortV(std::vector<int> &vec){
	if (vec.size() == 1)
		return ;
	std::vector<int>::iterator it;
	int middle = vec.size()/2;
	int i = 0;
	std::vector<int> vec2;
	std::vector<int> vec3;
	for (it = vec.begin(); it != vec.end(); it++){
		if (i >= middle)
			vec2.push_back(*it);
		else
			vec3.push_back(*it);
		i++;
	}
	sortV(vec2);
	sortV(vec3);

	std::merge(vec2.begin(), vec2.end(), vec3.begin(), vec3.end(), vec.begin());

	// std::cout << "============= end ========" << std::endl; // To show that the container is sorted
	// for (size_t i = 0; i < vec.size();i++)
	// 	std::cout << vec[i] << std::endl;
	
}