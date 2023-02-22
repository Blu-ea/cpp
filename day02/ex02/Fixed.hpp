/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 03:58:42 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/22 15:02:55 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

#include <iostream>

class Fixed{
	
private:
	int					_value;
	static const int	_fractionalBits = 8;

public:
		/************/
		/*   Ex00   */
		/************/
	Fixed();
	Fixed(Fixed const & src);
	~Fixed();
	Fixed & operator=(Fixed const & other);

	int getRawBits(void) const;
	void setRawBits(int const raw);
		/************/
		/*   Ex01   */
		/************/
	Fixed(const int value);
	Fixed(const float value);
	float toFloat(void) const;
	int toInt(void) const;


		/************/
		/*   Ex02   */
		/************/

	static const Fixed& max(const Fixed& first, const Fixed& second);
	static Fixed& max(Fixed& first, Fixed& second);
	static const Fixed& min(const Fixed& first, const Fixed& second);
	static Fixed& min(Fixed& first, Fixed& second);

	bool operator<(const Fixed& rhs) const;
	bool operator>(const Fixed& rhs) const;
	bool operator<=(const Fixed& rhs) const;
	bool operator>=(const Fixed& rhs) const;
	bool operator==(const Fixed& rhs) const;
	bool operator!=(const Fixed& rhs) const;

	Fixed operator+(Fixed const &rhs) const;
	Fixed operator-(Fixed const &rhs) const;
	Fixed operator*(Fixed const &rhs) const;
	Fixed operator/(Fixed const &rhs) const;

	Fixed operator++();
	Fixed operator--();
	Fixed operator++(int);
	Fixed operator--(int);
};

// bool	operator<(const Fixed& lhs, const Fixed& rhs);
// bool	operator>(const Fixed& lhs, const Fixed& rhs);
// bool	operator<=(const Fixed& lhs, const Fixed& rhs);
// bool	operator>=(const Fixed& lhs, const Fixed& rhs);
// bool	operator==(const Fixed& lhs, const Fixed& rhs);
// bool	operator!=(const Fixed& lhs, const Fixed& rhs);

// Fixed	operator+(Fixed const &lhs, Fixed const &rhs);
// Fixed	operator-(Fixed const &lhs, Fixed const &rhs);
// Fixed	operator*(Fixed const &lhs, Fixed const &rhs);
// Fixed	operator/(Fixed const &lhs, Fixed const &rhs);

// Fixed&	operator++(Fixed& fixed);
// Fixed&	operator--(Fixed& fixed);

// Fixed	operator++(Fixed& fixed, int);
// Fixed	operator--(Fixed& fixed, int);

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif