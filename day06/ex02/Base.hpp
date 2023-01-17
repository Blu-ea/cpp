/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:24:50 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/20 12:38:08 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BASE_HPP__
# define __BASE_HPP__

#include <iostream>
#include <cstdlib>
#include <cstdlib>
#include <typeinfo>
class Base{
	public :
		virtual ~Base() = 0;
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif