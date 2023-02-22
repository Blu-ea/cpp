/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:23:16 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/22 12:13:54 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

#include <exception>
#include <iostream>
#include <stdint.h>
#include <cstdlib>

class ErrorException : public std::exception {
	private:
		std::string m_error;
	public:
		ErrorException(std::string str) : m_error(str){};
		~ErrorException() throw() {};
		const char* what() const throw() {return (m_error.c_str());};
};

template<typename T>
class Array{
	private :
		size_t _size;
		T *_array;

	public :
		Array();
		Array(unsigned int size);
		Array(const Array &Array);
		~Array();

		unsigned int size() const;
		void operator= (const Array &rhs);
		T &operator[] (const unsigned int n) const throw(ErrorException);

		ErrorException OutOfRange;
	
};

#include "Array.tpp"
#endif