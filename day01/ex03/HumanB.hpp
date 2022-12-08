/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:29:31 by amiguez           #+#    #+#             */
/*   Updated: 2022/11/28 16:07:17 by amiguez          ###   ########.fr       */
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
	
	void attack(void);
	void setWeapon(Weapon& weapon);
};

#endif
