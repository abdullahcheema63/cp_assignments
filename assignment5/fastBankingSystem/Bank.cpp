/*
 * Bank.cpp
 *
 *  Created on: Apr 15, 2017
 *      Author: abdullah
 */

#include "Bank.h"

Bank::Bank() {
	// TODO Auto-generated constructor stub
	accountHolderArray=new AccountHolder*[10];
	arraySize=10;
	numberOfAccounts=0;

}
void Bank::doubleArray()
{
	AccountHolder** na=new AccountHolder*[arraySize*2];
	for (int i=0;i<numberOfAccounts;i++)
		na[i]=accountHolderArray[i];
	delete[] accountHolderArray;
	arraySize*=2;
}
AccountHolder& Bank::search(long CNIC)
{
	for (int i=0;i<numberOfAccounts;i++)
	{
		if (accountHolderArray[i]->getCnic()==CNIC)
			return *(accountHolderArray[i]);
	}
	cout<<"account holder not found"<<endl;
	exit(-1);
}
void Bank::createAccountHolder()
{
	cout<<"please enter your first name: ";string fn;cin>>fn;
	cout<<"please enter your middle name: ";string mn;cin>>mn;
	cout<<"please enter your last name: ";string ln;cin>>ln;
	cout<<"please enter your cnic: ";long c;cin>>c;
	cout<<"please enter your address: ";string add;cin>>add;
	cout<<"please enter your telephone number: ";long tn;cin>>tn;
	cout<<"please enter your date of birth"<<endl;
	cout<<"please enter day: ";int d;cin>>d;
	cout<<"please enter month: ";int m;cin>>m;
	cout<<"please enter year: ";int y;cin>>y;
	if (arraySize==numberOfAccounts)doubleArray();
	accountHolderArray[numberOfAccounts]=new AccountHolder(fn,mn,ln,c,add,tn,d,m,y);
	numberOfAccounts++;
}
void Bank::CreateAccount()
{
	cout<<"please enter your cnic: ";
	long c; cin>>c;
	AccountHolder& a=search(c);
	cout<<"please enter the type of account: "<<endl;
	int t;
	cout<<"press 1 for checking account: "<<endl;
	cout<<"press 2 for savings account: ";
	cin>>t;
	cout<<"please enter the type of card: "<<endl;
	int ct;
	cout<<"press 1 for master card"<<endl;
	cout<<"press 2 for visa card: "<<endl;
	cout<<"press 3 for local card: "<<endl;
	cin>>ct;
	cout<<"please enter opening amount: ";long am;cin>>am;
	a.addAccount(t,ct,am);

}
void Bank::generateMiniStatements()
{
	cout<<"please enter your cnic: ";long c;cin>>c;
	AccountHolder& a=search(c);
	cout<<"please enter you account number: ";long acn; cin>>acn;
	Account& ac=a.getAccount(acn);
	ac.MiniStatement();
}
void Bank::depositMoney()
{
	cout<<"please enter your cnic: ";long c;cin>>c;
	AccountHolder& a=search(c);
	cout<<"please enter you account number: ";long acn; cin>>acn;
	Account& ac=a.getAccount(acn);
	cout<<"please enter amount: ";long am;cin>>am;
	ac.deposit(am);
}
void Bank::balanceInquiry()
{
	cout<<"please enter your cnic: ";long c;cin>>c;
	AccountHolder& a=search(c);
	cout<<"please enter you account number: ";long acn; cin>>acn;
	Account& ac=a.getAccount(acn);
	cout<<"your current balance is: "<<ac.balanceInquiry()<<endl;
}
void Bank::transactionHistory()
{
	cout<<"please enter your cnic: ";long c;cin>>c;
	AccountHolder& a=search(c);
	cout<<"please enter you account number: ";long acn; cin>>acn;
	Account& ac=a.getAccount(acn);
	ac.TransactionHistory();
}
void Bank::listCustomers()
{
	for (int i=0;i<numberOfAccounts;i++)
		cout<<*(accountHolderArray[i])<<endl<<endl;
}
void Bank::withdrawMoney()
{
	cout<<"please select any option: "<<endl;
	cout<<"press 1 to withdraw using credit card"<<endl;
	cout<<"press 2 to withdraw from account "<<endl;
	int t;cin>>t;
	if (t==1)
	{
		return;
	}
	else if (t==2)
	{
		cout<<"please enter your cnic: ";long c;cin>>c;
		AccountHolder& a=search(c);
		cout<<"please enter you account number: ";long acn; cin>>acn;
		Account& ac=a.getAccount(acn);
		cout<<"please enter ammount to withdraw: ";long am;cin>>am;
		ac.withdraw(am);

	}

}
Bank::~Bank() {
	// TODO Auto-generated destructor stub
}

