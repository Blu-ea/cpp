/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:24:35 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/23 16:16:41 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

template < typename T >
int	easyfind(T tlist, int search)
{
	std::vector<int>::iterator it;

	it = find (tlist.begin(), tlist.end(), search);
	if (it != tlist.end())
		return (std::distance(tlist.begin(), it));
	return (-1);
}
