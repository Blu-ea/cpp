/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 20:59:47 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/21 10:09:28 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
# define __ITER_HPP__

#include <iostream>

template<typename t>
void iter(t *array, size_t size,void function(t& arg)){
	for (size_t i = 0; i < size; i++)
		function(array[i]);
}

template<typename t>
void print(t arg){
	std::cout << arg << std::endl;
}


#endif