/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:29:43 by amiguez           #+#    #+#             */
/*   Updated: 2023/04/02 00:53:45 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <list>
# include <vector>
# include <exception>
# include <string.h>
# include <cstdlib>
# include <time.h>
# include <unistd.h>
# include <iterator>

class Pmerge{
	private : 
		std::list<int> _lst;
		std::vector<int> _vec;

		Pmerge();

		void sortL(std::list<int> &lst);
		std::list<int> mergeL(std::list<int> lst2, std::list<int> lst3);
		void sortV(std::vector<int> &vec);
		std::vector<int> mergeV(std::vector<int> vec2, std::vector<int> vec3);
	
	public :

		Pmerge(char **lst) throw(std::exception);

		Pmerge(const Pmerge &src);
		~Pmerge();
		Pmerge operator=(const Pmerge& rhs);

		double sortList();
		double sortVector();
};

#endif