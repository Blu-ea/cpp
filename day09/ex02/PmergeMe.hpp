/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:29:43 by amiguez           #+#    #+#             */
/*   Updated: 2023/05/08 13:49:52 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <exception>
# include <algorithm>
# include <unistd.h>
# include <string.h>
# include <iostream>
# include <iterator>
# include <cstdlib>
# include <time.h>
# include <vector>
# include <list>
# include <set>

class Pmerge{
	private : 
		std::list<int> _lst;
		std::vector<int> _vec;

		Pmerge();

		void sortL(std::list<int> &lst, size_t size_min);
		std::list<int> mergeL(std::list<int> lst2, std::list<int> lst3);
		void sortV(std::vector<int> &vec, size_t size_min);
		std::vector<int> mergeV(std::vector<int> vec2, std::vector<int> vec3);
	
	public :

		Pmerge(char **lst) throw(std::exception);

		Pmerge(const Pmerge &src);
		~Pmerge();
		Pmerge operator=(const Pmerge& rhs);

		double sortList(size_t swi);
		double sortVector(size_t swi);
};

#endif