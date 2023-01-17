/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:59:25 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/16 00:32:06 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
private:
	bool gateKeeper;
public:
	ScavTrap();
	ScavTrap(ScavTrap const & src);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap const &rhs);

	ScavTrap(std::string _name);

	void attack(const std::string& target);
	void guardGate();
};

#endif
