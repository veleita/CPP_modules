// ************************************************************************** //
//                                                                            //
//                Account.cpp for GlobalBanksters United 		              //
//                Created on  : Mon Aug 16 12:06:15 2021                      //
//                Last update : Mon Aug 16 12:06:15 2021                      //
//                Made by : mzomeno <1veleita1@gmail.com>                     //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Account.hpp"

// Initialize  variables

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


// The account can be initialized with or without an initial deposit

Account::Account( int initial_deposit )
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 1;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::Account( void )
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}


Account::~Account( void )
{
}

 int	Account::getNbAccounts( void )
{
	return (0);
}

 int	Account::getTotalAmount( void )
{
	return (0);
}

 int	Account::getNbDeposits( void )
{
	return (0);
}

 int	Account::getNbWithdrawals( void )
{
	return (0);
}

 void	Account::displayAccountsInfos( void )
{
	return;
}

void	Account::makeDeposit( int deposit )
{
	(void)deposit;
	return;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	(void)withdrawal;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (0);
}

void	Account::displayStatus( void ) const
{
	return;
}

 void	Account::_displayTimestamp( void )
{
	std::cout << "[20210816_140232]";
}
