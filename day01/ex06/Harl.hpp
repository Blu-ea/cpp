/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 03:38:00 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/16 14:43:19 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
# define __HARL_HPP__

# include <iostream>

class Harl
{
	private:

		void debug(void);
		void info( void );
		void warning( void );
		void error( void );

		void (Harl::*ptr[4]) (void);

	public:
		Harl();

		void complain(const std::string level );
};

#endif