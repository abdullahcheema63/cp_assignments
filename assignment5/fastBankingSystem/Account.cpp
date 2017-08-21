/*
 * Account.cpp
 *
 *  Created on: Apr 15, 2017
 *      Author: abdullah
 */

#include "Account.h"
long Account::acountCounter=0;
Account::Account(int t,int ct,long am):ccard(ct) {
	// TODO Auto-generated constructor stub
	trans=new Transactions*[10];
	transAsize=10;
	transCount=0;
	accountType=t;
	acountCounter++;
	accountNumber=acountCounter;
	amount=am;
}
void Account::addTransaction(int t,long am)
{
	if (transAsize==transCount)
	{
		Transactions** na=new Transactions*[transAsize*2];
		for (int i=0;i<transCount;i++)
			na[i]=trans[i];
		delete[] trans;
		trans=na;
		transAsize-=2;
	}
	trans[transCount]=new Transactions(t,am);
	transCount++;
}
long Account::balanceInquiry()
{
	return amount;
}
void Account::withdraw(long am)
{
	assert(am<amount);
	amount-=am;
	if (am>=5000)amount-=0.002*am;
	if (am>50000)amount-=0.025*am;
	addTransaction(2,am);
}
void Account::deposit(long am)
{
	amount+=am;
	addTransaction(1,am);
}
void Account::TransactionHistory()
{
	cout<<"transaction history for account number "<<accountNumber<<" is: "<<endl;
	for (int i=0;i<transCount;i++)
	{
		cout<<*(trans[i])<<endl;
	}
}
void Account::MiniStatement()
{
	cout<<"MiniStatement for account number "<<accountNumber<<" is: "<<endl;
	for (int i=transCount-10;i<transCount;i++)
	{
		cout<<*(trans[i]);
	}
}
CreditCard& Account::getCreditcard()
{
	return ccard;
}
long Account::getAccountNumber(){ return accountNumber; }
Account::~Account() {
	// TODO Auto-generated destructor stub
}

