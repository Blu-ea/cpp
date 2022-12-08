/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 03:54:22 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/07 15:21:46 by amiguez          ###   ########.fr       */
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

Fixed& Fixed::operator=(Fixed const &other){
	_value = other._value;
	return (*this);
}


/*******************************************/
/*******************************************/
/*******************************************/

Fixed::Fixed(const int value){
	_value = value << _fractionalBits;
}

Fixed::Fixed(const float value){
	_value = static_cast<int>(value * (1 << _fractionalBits));
	std::cout << "Float constructor called" << std::endl;
	std::cout << "raw: " << _value << std::endl;
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


/*******************************************/
/*******************************************/
/*******************************************/

// bool	operator<(const Fixed& lhs, const Fixed& rhs){
// 	return (lhs.getRawBits() < rhs.getRawBits());
// // }
// bool	operator>(const Fixed& lhs, const Fixed& rhs){
// 	return (lhs.getRawBits() > rhs.getRawBits());
// }
// bool	operator<=(const Fixed& lhs, const Fixed& rhs){
// 	return (lhs.getRawBits() <= rhs.getRawBits());
// }
// bool	operator>=(const Fixed& lhs, const Fixed& rhs){
// 	return (lhs.getRawBits() >= rhs.getRawBits());
// }
// bool	operator==(const Fixed& lhs, const Fixed& rhs){
// 	return (lhs.getRawBits() == rhs.getRawBits());
// }
// bool	operator!=(const Fixed& lhs, const Fixed& rhs){
// 	return (lhs.getRawBits() != rhs.getRawBits());
// }
// Fixed	operator+(Fixed const &lhs, Fixed const &rhs){
// 	return (lhs.getRawBits() + rhs.getRawBits());
// }
// Fixed	operator-(Fixed const &lhs, Fixed const &rhs){
// 	return (lhs.getRawBits() - rhs.getRawBits());
// }
// Fixed	operator*(Fixed const &lhs, Fixed const &rhs){
// 	return (lhs.toFloat() * rhs.toFloat());
// }
// Fixed	operator/(Fixed const &lhs, Fixed const &rhs){
// 	return (lhs.getRawBits() / rhs.getRawBits());
// }

// Fixed&	operator++(Fixed &fixed){
// 	fixed.setRawBits(fixed.getRawBits() + 1);
// 	return (fixed);
// }
// Fixed&	operator--(Fixed &fixed){
// 	fixed.setRawBits(fixed.getRawBits() - 1);
// 	return (fixed);
// }

// Fixed	operator++(Fixed &fixed, int){
// 	return (++fixed);
// }
// Fixed	operator--(Fixed &fixed, int){
// 	return (--fixed);
// }


bool Fixed::operator<(Fixed const &rhs) const {
	return (this->_value < rhs.getRawBits());
}
bool Fixed::operator>(Fixed const &rhs) const {
	return (this->_value > rhs.getRawBits());
}
bool Fixed::operator<=(Fixed const &rhs) const {
	return (this->_value >= rhs.getRawBits());
}
bool Fixed::operator>=(Fixed const &rhs) const {
	return (this->_value >= rhs.getRawBits());
}
bool Fixed::operator==(Fixed const &rhs) const {
	return (this->_value == rhs.getRawBits());
}
bool Fixed::operator!=(Fixed const &rhs) const {
	return (this->_value != rhs.getRawBits());
}

Fixed Fixed::operator+(Fixed const &rhs) const {
	return (Fixed(this->toFloat() + rhs.toFloat()));
}
Fixed Fixed::operator-(Fixed const &rhs) const {
	return (Fixed(this->toFloat() - rhs.toFloat()));
}
Fixed Fixed::operator*(Fixed const &rhs) const {
	return (Fixed(this->toFloat() * rhs.toFloat()));
}
Fixed Fixed::operator/(Fixed const &rhs) const {
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed& Fixed::operator++(void) {
	this->_value++;
	return (*this);
}
Fixed& Fixed::operator--(void) {
	this->_value--;
	return (*this);
}
Fixed& Fixed::operator++(int) {
	return (++*this);
}
Fixed& Fixed::operator--(int) {
	return (--*this);
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
	return (a < b ? a : b);
}
Fixed& Fixed::max(Fixed &a, Fixed &b) {
	return (a > b ? a : b);
}
Fixed const & Fixed::min(Fixed const &a, Fixed const &b) {
	return (a < b ? a : b);
}
Fixed const & Fixed::max(Fixed const &a, Fixed const &b) {
	return (a > b ? a : b);
}

