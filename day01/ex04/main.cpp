/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:09:23 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/16 14:08:29 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

void	check_input(int argc, char **argv)
{
	if (argc != 4){
		std::cout << "Error: wrong number of arguments" << std::endl;
		std::cout << "Usage: ./replace <file name> <source to be deleted> <source to be placed>" << std::endl;

		exit(1);
	}
	std::ifstream file(argv[1]);
	if (!file){
		std::cout << "Error: file not found" << std::endl;
		exit(1);
	}
	if (argv[2][0] == '\0' || argv[3][0] == '\0'){
		std::cout << "Error: empty string" << std::endl;
		exit(1);
	}
}

// Function that replaces all occurrences of s1 by s2 in the file
void	replace(std::string &file, std::string s1, std::string s2)
{
	size_t pos = file.find(s1);
	while (pos != std::string::npos){
		file.erase (pos, s1.length());
		file.insert(pos, s2);
		pos = file.find(s1, pos + s2.length());
	}
}

int	main(int argc,char **argv)
{
	check_input(argc, argv);
	
	std::ifstream file(argv[1]);
	std::string	buffer;
	std::string	file_string;
	
	while(std::getline(file, buffer)){
		file_string += (buffer + "\n");
		std::cout << buffer << std::endl;
	}
	if (file_string.size())
		file_string.erase(file_string.size() - 1);

	replace(file_string, argv[2], argv[3]);

	std::string filename (argv[1] + std::string(".replace"));
	std::ofstream new_file (filename.c_str());
	new_file << file_string;
	new_file.close();
	file.close();
	return (0);
}