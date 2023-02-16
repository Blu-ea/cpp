/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 03:40:02 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/16 20:03:48 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
		harl.complain("ERROR");
	else
	{
		int j = -1;
		while (argv[1][++j]);
		int i = -1;
		while (++i < j)
			argv[1][i] = towlower(argv[1][i]);
		harl.complain(argv[1]);
	}
	return (0);
}
