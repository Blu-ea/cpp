/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:01:48 by amiguez           #+#    #+#             */
/*   Updated: 2022/12/09 18:07:55 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal(std::string type);
		WrongAnimal(void);
		virtual ~WrongAnimal(void);
		std::string getType(void) const;
		virtual void makeSound(void) const;
};

class WrongDog : public WrongAnimal{

	public:
		WrongDog(void);
		WrongDog(const WrongDog &other);
		virtual ~WrongDog(void);
		virtual void makeSound(void) const;

};

class WrongCat : public WrongAnimal{

	public:
		WrongCat(void);
		WrongCat(const WrongCat &other);
		virtual ~WrongCat(void);
		virtual void makeSound(void) const;

};

#endif