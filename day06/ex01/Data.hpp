/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:18:19 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/20 10:42:48 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DATA_HPP__
# define __DATA_HPP__

#include <iostream>
#include <stdint.h>

struct Data
{
	int	i;
	std::string name;
	
};

uintptr_t serialize(Data* ptr);

Data	*deserialize(uintptr_t raw);

#endif