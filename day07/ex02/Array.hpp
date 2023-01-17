/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:23:16 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/21 19:18:05 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

#include <exception>
#include <iostream>
#include <stdint.h>
#include <cstdlib>

template<typename T>
class Array{
	private:
		T *array;
		size_t arraySize;
	public:
		Array() : array(NULL), arraySize(0){}
		Array(uint32_t n) : array(new T[n]), arraySize(n){}
		// Array(uint16_t n) : array(new T[n]), arraySize(n){}
		Array(const Array &src) {
			array = new T[src.arraySize];
			arraySize = src.arraySize;
			for (size_t i = 0; i < src.arraySize; i++)
				array[i] = src.array[i];
		}


		const T& operator[](size_t index) const {
			if (index > arraySize)
				throw std::out_of_range("Index is out of Array");
			return (this.array[index]);
		}
		T& operator[](size_t index) {
			if (index > arraySize)
				throw std::out_of_range("Index is out of Array");
			return (array[index]);
		}


		~Array(){
				if (array) 
					delete [] array;
		}
};

#endif