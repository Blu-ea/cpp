/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:06:44 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/10 17:14:30 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

#include <iostream>

class Brain{
	private:
		std::string ideas[100];

	public:
		Brain();
		Brain(Brain const & src);
		~Brain(void);
		Brain &operator=(Brain const &rhs);

		std::string getIdea(int i) const;
		void setIdea(int i, std::string& idea);
};

#endif 