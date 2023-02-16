/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:46:43 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/16 13:22:05 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class	Zombie {

private:

	std::string name;

public:

	Zombie();
	~Zombie();
	
	Zombie(std::string name);
	
	void	announce(void) const;
	
	std::string	GetName(void) const;
	void		SetName(std::string name);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif