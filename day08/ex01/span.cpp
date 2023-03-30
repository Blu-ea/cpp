/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 03:56:18 by amiguez           #+#    #+#             */
/*   Updated: 2023/03/27 12:22:14 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
Span::~Span(){}
Span::Span(const unsigned int size): _N(size), _usedN(0), _content(std::vector<int>(0)){}
Span::Span(const Span &rhs) : _N(rhs._N), _usedN(rhs._usedN), _content(rhs._content){}

Span &Span::operator=(Span const &rhs) throw(std::overflow_error){
	if (_N < rhs._N)
		throw(std::overflow_error("Source is to big for dest"));
	_content = rhs._content;
	_usedN = rhs._usedN;
	return *this;
}


void Span::addNumber(const int & number) throw(std::overflow_error){
	if (_usedN >= _N)
		throw (std::overflow_error("The Stack is already Full"));
	_content.push_back(number);
	_usedN++;
	std::sort(_content.begin(), _content.end());
}


void Span::addNumbers(iterator start, iterator end) throw(std::overflow_error){
	if (_usedN >= _N)
		throw (std::overflow_error("The Stack is already Full"));
	if (_usedN + (end - start) - 1 >= _N)
		throw (std::overflow_error("The Stack don't have enough space for the list"));
	while (start != end){
		addNumber(*start.base());
		start++;
	}
}

void Span::addNumbers() throw(std::overflow_error){
	if (_usedN >= _N)
		throw (std::overflow_error("The Stack is already Full"));
	while (_usedN < _N)
		addNumber(::myRand());
}

int	Span::shortestSpan() const throw(std::overflow_error){
	if (_usedN < 2)
		throw(std::overflow_error("The Stack need more Digit in the Span beforehand"));
	int ret = _content[1] - _content[0];
	for (unsigned int i = 1; i < _usedN - 1  ; i++){
		ret = std::min(_content[i + 1] - _content[i] , ret);
	}
	return (ret);
}

int	Span::longestSpan() const throw(std::overflow_error){
	if (_usedN < 2)
		throw(std::overflow_error("The Stack need more Digit in the Span beforehand"));
	return _content.back() - _content.front();
}



unsigned int Span::getSize()const{
	return (_N);
}

unsigned int Span::getUsed()const{
	return (_usedN);
}



int	myRand(){
	return (std::rand() % MAX_RAND);
}