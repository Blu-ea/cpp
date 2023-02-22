/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:35:55 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/22 12:13:59 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(): _array (new T[0]), _size(0), OutOfRange("Error : Index out of Range"){}

template <typename T>
Array<T>::Array(unsigned int size): _size(size), _array(new T[size]), OutOfRange("Error : Index out of Range"){}

template <typename T>
Array<T>::Array(const Array &src): _size(src.size()), _array(), OutOfRange("Error : Index out of Range"){}

template <typename T>
Array<T>::~Array(){
	delete[] (_array);
}

template <typename T>
unsigned int Array<T>::size() const{
	return (_size);
}

template <typename T>
void Array<T>::operator=(const Array &rhs){
	delete _array;

	this->_size = rhs.size();
	this->array = new T[_size];
	for (size_t i = 0; i < _size; i++)
		_array[i] = rhs._array[i];
}

template <typename T>
T& Array<T>::operator[](const unsigned int n) const throw(ErrorException){
	if (n >= _size || n < 0)
		throw(OutOfRange);
	return (_array[n]);
}
