/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:31:42 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/27 12:17:26 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# define MAX_RAND 10000

# include <vector>
# include <algorithm>
# include <stdexcept>
# include <ctime>
# include <iostream>

class Span{
	private :
		const unsigned int	_N;
		unsigned int		_usedN;
		std::vector<int>	_content;
		Span();

	public :
	typedef std::vector<int>::iterator iterator;


		~Span();
		Span(const Span &rhs);
		Span &operator=(Span const &rhs) throw(std::overflow_error);

		Span(const unsigned int size);

		void addNumber(const int & number) throw(std::overflow_error);
		void addNumbers(iterator start, iterator end) throw(std::overflow_error);
		void addNumbers() throw(std::overflow_error);
		int	shortestSpan() const throw(std::overflow_error);
		int	longestSpan() const throw(std::overflow_error);

		unsigned int getSize()const;
		unsigned int getUsed()const;
};

int	myRand();

#endif