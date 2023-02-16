/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:29:31 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/16 13:42:45 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB{

private :
	std::string	name_;
	Weapon		*weapon_;
public :

	HumanB(void);
	~HumanB(void);
	HumanB(std::string name);
	
	void attack(void) const;
	void setWeapon(Weapon& weapon);
};

#endif
