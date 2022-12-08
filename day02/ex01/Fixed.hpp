/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 03:58:42 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/07 15:06:21 by amiguez          ###   ########.fr       */
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

	
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif