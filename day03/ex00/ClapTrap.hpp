/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:17:42 by amiguez           #+#    #+#             */
/*   Updated: 2023/01/17 18:51:01 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

# include <iostream>

class ClapTrap{

	private:
		std::string	_name;
		unsigned int	_hitPoint;
		unsigned int	_nrgPoint;
		unsigned int	_atkPoint;

	public:
		ClapTrap();
		ClapTrap(ClapTrap const & src);
		~ClapTrap();
		ClapTrap &operator=(ClapTrap const &rhs);

		ClapTrap(std::string name);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
