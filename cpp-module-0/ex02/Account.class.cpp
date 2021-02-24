#include <iostream>
#include <sstream>
#include <iomanip>
#include "Account.class.h"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
static int _checkAmountVar = 0;

int Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:"
			<< getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}


void Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";p_amount:" << _amount - deposit<< ";deposit:" << deposit
			  << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (_amount - withdrawal < 0)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex <<";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
		return false;
	}
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";p_amount:" << _amount + withdrawal << ";withdrawal:" << withdrawal
		<< ";amount:" <<  _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return true;
}

int Account::checkAmount(void) const
{
	return ++_checkAmountVar;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";amount:" << _amount
		<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	time_t rawTime;
	struct tm* timeInfo;
	
	time(&rawTime);
	timeInfo = localtime(&rawTime);
	
	std::stringstream buffer;
	buffer << "[" << std::put_time(timeInfo, "%Y%m%d_%H%M%S") << "] ";
	std::cout << buffer.str();
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	
	_amount = initial_deposit;
	_totalAmount += _amount;
	
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
	_nbAccounts--;
	_totalAmount -= _amount;
	_totalNbDeposits--;
	_totalNbWithdrawals--;
	
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";amount:" << _amount << ";closed" << std::endl;
}

