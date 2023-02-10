/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:01:48 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/06 10:18:58 by amiguez          ###   ########.fr       */
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
		WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		virtual ~WrongAnimal();
		WrongAnimal &operator=(WrongAnimal const &rhs);

		WrongAnimal(std::string type);

		std::string getType() const;
		virtual void makeSound() const;
};

class WrongDog : public WrongAnimal{

	public:
		WrongDog(void);
		WrongDog(const WrongDog &other);
		virtual ~WrongDog(void);
		WrongDog &operator=(WrongDog const &rhs);

		virtual void makeSound(void) const;
};

class WrongCat : public WrongAnimal{

	public:
		WrongCat(void);
		WrongCat(const WrongCat &other);
		virtual ~WrongCat(void);
		WrongCat &operator=(WrongCat const &rhs);

		virtual void makeSound(void) const;

};

#endif