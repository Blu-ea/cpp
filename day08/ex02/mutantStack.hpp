/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 13:32:05 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/27 17:47:32 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
# define MUTANSTACK_HPP

# include <iostream>
# include <stack>
# include <list>
# include <vector>
template <typename T>
class MutantStack : public std::stack<T>{

	public :
		MutantStack();
		MutantStack(MutantStack<T> const &src);
		~MutantStack();

		MutantStack<T> &operator=(MutantStack<T> const &rhs);

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator begin();
		iterator end();
		const_iterator cbegin();
		const_iterator cend();
};

# include "mutantStack.tpp"

#endif