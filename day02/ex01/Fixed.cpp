/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 03:54:22 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/07 15:15:09 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	this->_value = 0;
}
Fixed::Fixed(Fixed const & src){
	*this = src;
}
Fixed::~Fixed(){
}


int Fixed::getRawBits(void) const{
	return (_value);
}

void Fixed::setRawBits(int const raw){
	_value = raw;
}

Fixed& Fixed::operator=(Fixed const & other){
	_value = other._value;
	return *this;
}


/*******************************************/
/*******************************************/
/*******************************************/

Fixed::Fixed(const int value){
	_value = value << _fractionalBits;
}

Fixed::Fixed(const float value){
	_value = static_cast<int>(value * (1 << _fractionalBits));
}

float Fixed::toFloat(void) const{
	return (static_cast<float>(_value) / static_cast<float>(1 << _fractionalBits));
}

int Fixed::toInt(void) const{
	return (_value >> _fractionalBits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
	out << fixed.toFloat();
	return out;
}