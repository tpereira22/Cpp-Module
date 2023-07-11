/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:35:31 by timartin          #+#    #+#             */
/*   Updated: 2023/07/11 16:35:34 by timartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <chrono>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// Constructors
Account::Account( void )
	: _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:";
	std::cout << this->_amount << ";created" << std::endl;
}

Account::Account(int initial_deposit)
	: _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:";
	std::cout << this->_amount << ";created" << std::endl;
}

// Destructor
Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:";
	std::cout << this->_amount << ";closed" << std::endl;
}

// Display All Accounts Info - Static Func
void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:";
	std::cout << _totalAmount << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

// Display Specific Account Info
void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:";
	std::cout << this->_amount << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

// Make Deposit
void	Account::makeDeposit( int deposit )
{
	this->_nbDeposits++;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amout:";
	std::cout << this->_amount << ";deposit:" << deposit << ";amount:";
	std::cout << (this->_amount + deposit) << ";nb_deposits:";
	std::cout << this->_nbDeposits << std::endl;
	this->_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits += 1;
}

// Make Withdrawal
bool	Account::makeWithdrawal( int withdrawal )
{
	if ((this->_amount - withdrawal) < 0)
	{
		Account::_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << ";p_amount:";
		std::cout << this->_amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	this->_nbWithdrawals++;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:";
	std::cout << this->_amount << ";withdrawal:" << withdrawal << ";amount:";
	std::cout << (this->_amount - withdrawal) << ";nb_withdrawals:";
	std::cout << this->_nbWithdrawals << std::endl;
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals += 1;
	return (true);
}

// Get Time Stamp
void	Account::_displayTimestamp( void )
{
	std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
	std::time_t time = std::chrono::system_clock::to_time_t(now);
	std::tm *localTime = std::localtime(&time);
	std::cout << std::put_time(localTime, "[%Y%m%d_%H%M%S]");
}

//Getters
int	Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return _totalAmount;
}

int	Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

int		Account::checkAmount( void ) const
{
	return this->_amount;
}
