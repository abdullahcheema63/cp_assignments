//============================================================================
// Name        : fastBankingSystem.cpp
// Author      : Muhammad Abdullah Cheema
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include "Bank.h"
int main()
{
	Bank fbs;
	cout<<"Welcome to FAST Banking System"<<endl;
	while (true)
	{
		cout<<"press 1 to create an acocunt holder "<<endl;
		cout<<"press 2 to create a new account for existing customer: "<<endl;
		cout<<"press 3 to generate mini statements of existing account: "<<endl;
		cout<<"press 4 to withddraw money"<<endl;
		cout<<"press 5 to deposit money"<<endl;
		cout<<"press 6 for balance inquiry"<<endl;
		cout<<"press 7 for transaction history"<<endl;
		cout<<"press 8 to list existing customers"<<endl;
		cout<<"press 9 to exit"<<endl;
		int a;cin>>a;
		if (a==1)
			fbs.createAccountHolder();
		else if (a==2)
			fbs.CreateAccount();
		else if (a==3)
			fbs.generateMiniStatements();
		else if (a==4)
			fbs.withdrawMoney();
		else if (a==5)
			fbs.depositMoney();
		else if (a==6)
			fbs.balanceInquiry();
		else if (a==7)
			fbs.transactionHistory();
		else if (a==8)
			fbs.listCustomers();
		else if (a==9)
			return 0;
		else
		{
			cout<<"wrong option selected"<<endl;
			continue;
		}
		continue;
	}
}
