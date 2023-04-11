/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 19:59:55 by amiguez           #+#    #+#             */
/*   Updated: 2023/04/11 08:37:40 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

double	rpnCalculator(std::string expression) throw(std::exception){
	std::stack<double> rnp;

	double op1, op2 =0;

	for (size_t i = 0; i < expression.length() ; i++){
		if (expression[i] >= '0' && expression[i] <= '9')
			rnp.push(expression[i] - 48);
		else if (rnp.size() >= 2 && expression[i] != ' '){
			op1 = rnp.top() ; rnp.pop();
			op2 = rnp.top() ; rnp.pop();
			switch(expression[i]){
			
			case '+':
				rnp.push(op2 + op1);
				break;
			case '-':
				rnp.push(op2 - op1);
				break;
			case '*':
				rnp.push(op2 * op1);
				break;
			case '/':
				if (op1 == 0)
					throw(std::out_of_range("Division by zero"));
				rnp.push(op2 / op1);
			}
		}
		else if (expression[i] != ' ')
			throw(std::out_of_range("To many Operator in RNP expression"));
	}
	
	if (rnp.size() != 1)
		throw(std::out_of_range("Not enought operator in RNP expression"));
	return (rnp.top());
}
