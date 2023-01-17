/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:30:25 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/20 20:12:26 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_HPP__
# define __WHATEVER_HPP__

#include <iostream>

template<typename t>
void	swap(t &a, t &b){
	t temp = a;
	a = b;
	b = temp;
}
template<typename t>
t	min(t const a, t const b){
	if (a < b)
		return (a);
	return (b);
}

template<typename t>
t	max(t const a, t const b){
	if (a > b)
		return (a);
	return (b);
}

#endif