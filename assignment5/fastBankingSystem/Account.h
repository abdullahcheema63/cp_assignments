/*
 * Account.h
 *
 *  Created on: Apr 15, 2017
 *      Author: abdullah
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include "CreditCard.h"
#include "Transactions.h"

class Account {
	int accountType;//1 for checking, 2 for savings
	long accountNumber;
	long amount;
	CreditCard ccard;
	Transactions** trans;
	int transAsize;
	int transCount;
	static long acountCounter;
	void addTransaction(int t,long am);
public:
	Account(int t,int ct,long am=0);
	void withdraw(long am);
	long getAccountNumber();
	void withdrawUsingCreditcard(long am);
	void deposit(long am);
	long balanceInquiry();
	void TransactionHistory();
	void MiniStatement();
	CreditCard& getCreditcard();
	~Account();
};

#endif /* ACCOUNT_H_ */
