/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:26:10 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/21 09:28:07 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"




int	main(void){

	Data data;
	uintptr_t temp;
	Data *other_data;

	std::cout << "what is your name : ";
	std::cin >> data.name;
	std::cout <<"what is your age : ";
	std::cin >> data.i;

	std::cout << "\n===========" << std::endl;
	temp = serialize(&data);
	std::cout << "sterilized data : " << temp << std::endl;
	std::cout << "===========\n" << std::endl;
	
	other_data = deserialize(temp);
	std::cout << " == desterilization == " << std::endl << std::endl;
	std::cout << "name : " << other_data->name << std::endl << "age : " << other_data->i << std::endl;
}

uintptr_t serialize(Data* ptr){
	return ((uintptr_t)(void*)(ptr));
}

Data	*deserialize(uintptr_t raw){
	return ((Data*)(void*)(raw));
}
