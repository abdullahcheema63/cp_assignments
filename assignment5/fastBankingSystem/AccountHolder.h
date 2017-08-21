/*
 * AccountHolder.h
 *
 *  Created on: Apr 15, 2017
 *      Author: abdullah
 */

#ifndef ACCOUNTHOLDER_H_
#define ACCOUNTHOLDER_H_
#include "DateOfBirth.h"
#include "Account.h"
class AccountHolder {
	string firstName;
	string middleName;
	string lastName;
	long cnic;
	string address;
	long telephoneNnumber;
	DateOfBirth dob;
	long id;
	Account** accounts;
	int asize;
	int nAccounts;
	static long accountHolderCounter;
	void doubleArray();
public:
	AccountHolder(string fn,string mn,string ln,long CNIC,string add,long tpn,int day,int mon,int year);
	string getFrstName();
	string getMiddleName();
	string getLastName();
	long getCnic();
	string getAddress();
	long getTelephoneNumber();
	long getId();
	DateOfBirth& getDOB();
	void setAddress(string a);
	void setTelephoneNumber(long tn);
	void addAccount(int t,int ct,long am);
	Account& getAccount(long acn);
	void display(ostream& out);
	~AccountHolder();
};
ostream& operator<<(ostream& out,AccountHolder& ah);
#endif /* ACCOUNTHOLDER_H_ */
