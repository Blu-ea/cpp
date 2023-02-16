/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:35:08 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/16 13:42:57 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA{

private :
	std::string	name_;
	Weapon		*weapon_;
public :

	HumanA(void);
	~HumanA(void);
	HumanA(const std::string& name, Weapon& weapon);

	void attack(void) const;
};

#endif