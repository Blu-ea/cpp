/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:11:03 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/28 19:21:05 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>(){}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &src) : std::stack<T>(src) {
	*this = src;
}

template <typename T>
MutantStack<T>::~MutantStack(){}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack const &rhs) {
	this->c = rhs.c;
	return *this;
}

template<typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::begin() {return (this->c.begin());}

template<typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::end() {return (this->c.end());}

template<typename T>
typename std::stack<T>::container_type::reverse_iterator	MutantStack<T>::rbegin() {return (this->c.cbegin());}

template<typename T>
typename std::stack<T>::container_type::reverse_iterator	MutantStack<T>::rend() {return (this->c.cend());}
