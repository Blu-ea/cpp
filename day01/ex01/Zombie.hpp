/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:09:40 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/16 13:34:20 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie {

private:

	std::string name;

public:

	Zombie();
	~Zombie();
	
	Zombie(std::string name);
	void	announce(void) const;
	
	std::string	GetName() const;
	void		SetName(std::string name);
};


Zombie* zombieHorde( int N, std::string name );

#endif