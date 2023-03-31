/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:32:12 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/31 18:51:38 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src){(void) src;}
BitcoinExchange::~BitcoinExchange(){}
BitcoinExchange BitcoinExchange::operator=(const BitcoinExchange &rhs){(void) rhs; return *this;}

BitcoinExchange::BitcoinExchange() throw(std::exception) {
	
	std::ifstream fdata("data.csv");
	if(!fdata.is_open())
		throw (std::runtime_error ("couldn't be open"));

	fillmap(fdata, ',');
	fdata.close();
}

void	BitcoinExchange::fillmap(std::ifstream &file, char separator){
	
	std::string line;
	std::string::iterator it;
	
	std::getline(file,line,'\n');
	while (std::getline(file, line, '\n')){
		if (line.find(separator) == std::string::npos ){
			file.close();
			throw (std::runtime_error("Invalide database => " + line));
		}
		std::string date = line.substr(0, line.find(separator));
		std::string amount = line.substr(line.find(separator) + 1 , line.length());
		addValue(_data, checkDate(date, line), checkAmount(amount, line));
	}
}


void BitcoinExchange::addValue(std::map<std::string, double> &map, std::string date, double amount){
	map[date] = amount;
}


std::string BitcoinExchange::checkDate(std::string date, std::string line) throw (std::exception){
	int	y = -1, m = -1, d = -1;
	
	sscanf(date.c_str(), "%d-%d-%d", &y, &m, &d);

	for (size_t i = 0; i < date.length(); i++){
		if (i == 4 || i == 7){
			if (date[i] != '-')
				throw (std::runtime_error("Invalide date => " + line)); // check if the date is valid
		}
		else if (!isdigit(date[i]))
			throw (std::runtime_error("Invalide date => " + line)); // check if the date is valid
	}
	if (date.length() != 10)
		throw (std::runtime_error("Invalide date => " + line)); // check if the date is valid
	if (y < 0 || y > 2023 || m <= 0 || m > 12 || d <= 0 || d > 31) 
		throw (std::runtime_error("Invalide date => " + line)); // check if the date is valid
	return (date);
}

double BitcoinExchange::checkAmount(std::string amount, std::string line) throw (std::exception){
	char *check;
	
	if (amount.length() == 0)
		throw (std::runtime_error("Invalide amount => " + line));
	double dAmount = std::strtod(amount.c_str(), &check);
	if (dAmount < 0 || dAmount > 2147483647)
		throw (std::runtime_error("Invalide amount => " + line));
	if (check[0])
		throw (std::runtime_error("Invalide amount => " + line));
	if (amount.find(' ') != std::string::npos)
		throw (std::runtime_error("Invalide amount => " + line));
	return (dAmount);
}


void BitcoinExchange::calcValue(std::string input) throw(std::exception){

	std::string line;

	std::ifstream finput(input.c_str());
	if(!finput.is_open())
		throw (std::runtime_error ("couldn't be open"));
	
	std::getline(finput,line,'\n');
	while (std::getline(finput, line, '\n')){
		try{
			
		if (line.find(" | ") == std::string::npos )
			throw(std::runtime_error("Bad input => " + line ));

		std::string date = checkDate(line.substr(0, line.find(" | ")), line);
		double amount = checkAmount(line.substr(line.find(" | ") + 3 , line.length()), line);
	
	
		std::map<std::string, double>::iterator it = _data.upper_bound(date);
		it.operator--();
		std::cout << date << " => " << amount << " = " << amount * it->second << std::endl;
		}
		
		catch (std::exception &e){std::cout << "Error: " << input << ": " <<e.what() << std::endl;}
	}
	finput.close();
}
