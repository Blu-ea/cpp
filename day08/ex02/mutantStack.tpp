/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:11:03 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/27 17:44:23 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(){}
template <typename T>
MutantStack<T>::~MutantStack(){}
template <typename T>
MutantStack<T>::MutantStack(const MutantStack &rhs){}

template<typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::begin() {return (this->c.begin());}

template<typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::end() {return (this->c.end());}

template<typename T>
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::cbegin() {return (this->c.cbegin());}

template<typename T>
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::cend() {return (this->c.cend());}