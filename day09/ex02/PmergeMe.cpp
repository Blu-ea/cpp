/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 21:00:13 by amiguez           #+#    #+#             */
/*   Updated: 2023/05/08 13:49:14 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

Pmerge::Pmerge(){}
Pmerge::~Pmerge(){}
Pmerge::Pmerge(const Pmerge& src){*this = src;}
Pmerge Pmerge::operator=(const Pmerge& rhs){*this = rhs; return *this;}

Pmerge::Pmerge(char **lst) throw(std::exception){

	std::set<int> check_double;
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
		if (check_double.find(static_cast<int>(num)) != check_double.end())
			throw(std::out_of_range("Duplicate present"));
		if (num != static_cast<int>(num))
			throw(std::out_of_range("Float present"));
		check_double.insert(num);
		_vec.push_back(num);
		_lst.push_back(num);
	}

	size_t MAX_AMOUNT = 15;

	std::cout << "before : " ;
	size_t i;
	std::cout << lst[0] ;
	for (i = 1; lst[i] && i < MAX_AMOUNT ; i++){
		std::cout << ", ";
		std::cout << lst[i];
	}
	if (i == MAX_AMOUNT && lst[i])
		std::cout << ", [...]";
	std::cout << std::endl;
		/********************/
	std::cout << "after  : " ;
	std::set<int>::iterator it = check_double.begin();
	std::cout << *it;
	it++;
	for (size_t i = 1; i < check_double.size() && i < MAX_AMOUNT; i++){
		std::cout << ", ";
		std::cout << *it;
		it++;
	}
	if (i == MAX_AMOUNT && i != check_double.size())
		std::cout << ", [...]";
	std::cout << std::endl;

}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

double Pmerge::sortList(size_t swi){

	clock_t start = clock();
	sortL(_lst, swi);
	clock_t stop = clock();

	// std::cout << "============= _LST ========" << std::endl; // To show that the container is sorted
	// for (std::list<int>::iterator it = _lst.begin(); it != _lst.end();it++)
	// 	std::cout << *it << ", ";
	// std::cout << std::endl;
	
	double duration = static_cast<double>(stop - start) / CLOCKS_PER_SEC * 1000000;
	return duration;
}

void Pmerge::sortL(std::list<int> &lst, size_t size_min){
	if (lst.size() == 1)
		return ;
	if (lst.size() > size_min){  // merge part
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
		sortL(lst2, size_min);
		sortL(lst3, size_min);

		lst = mergeL(lst2, lst3);
	} else {  // insertion part
		std::list<int>::iterator it = lst.begin() ++;
			while (it != lst.end()) {
		std::list<int>::iterator it2 = it;
		std::list<int>::iterator it3 = it;
		it2--;
		while (it2 != lst.begin() && *it2 > *it3){
			int temp = *it2;
			*it2 = *it3;
			*it3 = temp;
			it2--;
			it3--;
		}
		if (it2 == lst.begin() && *it2 > *it3)
			std::iter_swap(it2, it3);
		it ++;	
			}
	}
	// std::cout << "============= end ========" << std::endl; // To show that the container is sorted
	// for (std::list<int>::iterator it = lst.begin(); it != lst.end();it++)
	// 	std::cout << *it << std::endl;

}

std::list<int> Pmerge::mergeL(std::list<int> lst2, std::list<int> lst3){
	
	std::list<int> nlst(lst2);	
	
	nlst.merge(lst3);
	return (nlst);
}

////////////////////////////////////////////////////////////////////////////////

double Pmerge::sortVector(size_t swi){
	clock_t start = clock();
	sortV(_vec, swi);
	clock_t stop = clock();

	// std::cout << "============= _VEC ========" << std::endl; // To show that the container is sorted
	// for (size_t i = 0; i < _vec.size();i++)
	// 	std::cout << _vec[i] << ", ";
	// std::cout << std::endl;

	double duration = static_cast<double>(stop - start) / CLOCKS_PER_SEC * 1000000;
	return duration;
}

void Pmerge::sortV(std::vector<int> &vec, size_t size_min){
	if (vec.size() == 1)
		return ;
	if (vec.size() > size_min){  // merge part
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
		sortV(vec2, size_min);
		sortV(vec3, size_min);

		std::merge(vec2.begin(), vec2.end(), vec3.begin(), vec3.end(), vec.begin());
	} else {  // insertion part
			for (size_t i = 1; i < vec.size(); i++){
		int j = i-1;
		while (j != -1 && vec[j] > vec[j+1]){
			int temp;
			temp = vec[j];
			vec[j] = vec[j+1];
			vec[j+1] = temp;
			j--;
		}
			}
	}
	
	// std::cout << "============= end ========" << std::endl; // To show that the container is sorted
	// for (size_t i = 0; i < vec.size();i++)
	// 	std::cout << vec[i] << std::endl;
	
}