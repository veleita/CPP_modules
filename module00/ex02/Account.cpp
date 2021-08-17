// ************************************************************************** //
//                                                                            //
//                Account.cpp for GlobalBanksters United 		              //
//                Created on  : Mon Aug 16 12:06:15 2021                      //
//                Last update : Mon Aug 16 12:06:15 2021                      //
//                Made by : mzomeno <1veleita1@gmail.com>                     //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <chrono>
#include <iomanip>
#include "Account.hpp"

// Initialize static variables

const int startIndex = 0;

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

static int *amounts;

// The account can be initialized with or without an initial deposit

Account::Account( int initial_deposit )
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
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


Account::~Account()
{
	if (amounts == NULL)
	{
		try {
			amounts = new(std::nothrow) int[_nbAccounts + 1];
			amounts[_nbAccounts + 1] = 0;
		} catch (std::bad_alloc) {
			std::cerr << "Exception: Allocation failure occured." << std::endl;
			std::abort();
		} catch (...) {
			std::cerr << "Exception: Other error occured." << std::endl;
			std::abort();
		}
	}
	amounts[_accountIndex] = _amount;
	if (_accountIndex == startIndex)
	{
		checkAmount();
		delete[] amounts;
		amounts = NULL;
	}
//	this->_nbAccounts--;
//	Account::_displayTimestamp();
//	std::cout << "index:" << this->_accountIndex << ";";
//	std::cout << "amount:" << this->_amount << ";";
//	std::cout << "closed" << std::endl;
}

 int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

 int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

 int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

 int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

 void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "acounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
	return;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
	return;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";

	if (withdrawal > this->_amount)	
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}

	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << this->_amount << ";";
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	for (int i = 0; i < _nbAccounts; i++)
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "closed" << std::endl;
	}
	return (0);
//	if (this->_amount > 0)
//		return (1);
//	else
//		return (0);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
	return;
}

 void	Account::_displayTimestamp( void )
{
	std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	std::time_t time_now = std::chrono::system_clock::to_time_t(now);

	std::cout << std::put_time(std::localtime(&time_now), "[%G%m%d_%H%M%S]");
}
