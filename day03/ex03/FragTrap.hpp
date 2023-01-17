/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:41:41 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/14 15:32:23 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{

public:
	FragTrap();
	FragTrap(FragTrap const & src);
	~FragTrap();
	FragTrap &operator=(FragTrap const &rhs);

	FragTrap(std::string _name);

	void highFivesGuys();
};

#endif
