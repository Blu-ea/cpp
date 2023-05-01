/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:31:55 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/31 18:51:32 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <map>
# include <cstdlib>
# include <cctype>
# include <iterator>

class BitcoinExchange{
	private :
		std::map<std::string, double>	_data;

		void fill_data(std::ifstream &file, char separator);
		std::string checkDate(std::string date, std::string line)throw (std::exception);

		double checkAmount(std::string amount, std::string line, bool is_data)throw (std::exception);
		void addValue(std::map<std::string, double> &map, std::string date, double amount);
	
	public :
	
		BitcoinExchange() throw (std::exception);
		BitcoinExchange(const BitcoinExchange &src);
		~BitcoinExchange();

		BitcoinExchange operator=(const BitcoinExchange &rhs);
		void calcValue(std::string input) throw(std::exception);

};

#endif