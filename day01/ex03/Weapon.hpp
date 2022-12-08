/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:18:33 by amiguez           #+#    #+#             */
/*   Updated: 2022/11/28 16:07:10 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon{

private:
	std::string type_;

public:
	Weapon(const std::string &type);
	~Weapon(void);


	const std::string& getType() const;
	void setType(std::string type);
};

#endif