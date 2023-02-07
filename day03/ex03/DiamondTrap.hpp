/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:59:31 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/06 10:00:15 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
private :
	std::string _name;
public:
	
	DiamondTrap();
	DiamondTrap(DiamondTrap const &src);
	~DiamondTrap();
	DiamondTrap &operator=(DiamondTrap const &rhs);

	DiamondTrap(std::string name);

	std::string	getName() const;
	void whoAmI();
};
#endif