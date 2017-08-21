/*
  * Bank.h
 *
 *  Created on: Apr 15, 2017
 *      Author: abdullah
 */

#ifndef BANK_H_
#define BANK_H_
#include "AccountHolder.h"
#include <cstdlib>
class Bank {
	AccountHolder** accountHolderArray;
	int arraySize;
	int numberOfAccounts;
	void doubleArray();
	AccountHolder& search(long CNIC);
public:
	Bank();
	void createAccountHolder();
	void CreateAccount();
	void generateMiniStatements();
	void withdrawMoney();
	void depositMoney();
	void balanceInquiry();
	void transactionHistory();
	void listCustomers();
	~Bank();
};

#endif /* BANK_H_ */
