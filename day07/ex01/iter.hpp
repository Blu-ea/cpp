/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 20:59:47 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/21 18:07:02 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
# define __ITER_HPP__

#include <iostream>

template<typename t>
void iter(t *array, int size,void function(t& arg)){
	for (int i = 0; i < size; i++)
		function(array[i]);
}

template<typename t>
void print(t arg){
	std::cout << arg;
}


#endif