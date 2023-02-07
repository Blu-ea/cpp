/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:35:29 by amiguez           #+#    #+#             */
/*   Updated: 2023/02/06 12:57:46 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>


int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


/************************/
/*		Constructor		*/
/*			&			*/
/*		Destructor		*/
/************************/



Account::Account( int initial_deposit ) : _accountIndex(_nbAccounts++), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
	_totalAmount += initial_deposit;
}

Account::~Account(){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

/************************/
/*		Getters			*/
/************************/

int Account::getNbAccounts(void){
	return (_nbAccounts);
}

int Account::getTotalAmount(void){
	return (_totalAmount);
}

int Account::getNbDeposits(void){
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void){
	return (_totalNbWithdrawals);
}


/************************/
/*		Methods			*/
/************************/

void Account::displayAccountsInfos(void){
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit ){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();
	std::cout << "index:" <<_accountIndex;
	std::cout << ";p_amount:" << _amount;
	if (withdrawal > _amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (1);
	}
	_amount -= withdrawal;
	_nbWithdrawals ++;
	_totalNbWithdrawals ++;
	_totalAmount -= withdrawal;
	std::cout << ";withdrawal:" << withdrawal;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (0);
}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	struct tm	*local;
	char		ts[19] = {0};

	std::time_t timer = std::time(NULL);
	local = localtime(&timer);
	std::strftime(ts, 19, "[%Y%m%d_%H%M%S] ", local);
	std::cout << ts;
}

int		Account::checkAmount( void ) const{
	return (_totalAmount);
}
