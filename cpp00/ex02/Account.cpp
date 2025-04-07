#include "Account.hpp"
#include <iostream>

int Account::getNbAccounts( void ) {
	return _nbAccounts;
}
int Account::getTotalAmount( void ) {
	return _totalAmount;
}
int Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}
int Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}
void Account::displayAccountsInfos(void){
	std::cout << "number of accounts: " << _nbAccounts << std::endl;
	std::cout << "total amount: " << _totalAmount << std::endl;
	std::cout << "total deposits: " << _totalNbDeposits << std::endl;
	std::cout << "total withdrawals: " << _totalNbWithdrawals << std::endl;
}

Account::Account(){
	_nbAccounts = 0;
	_totalAmount = 0;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
	_accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::Account(int initial_deposit) {
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
}

Account::~Account(){
}
