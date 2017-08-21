/*
 * AccountHolder.cpp
 *
 *  Created on: Apr 15, 2017
 *      Author: abdullah
 */

#include "AccountHolder.h"
long AccountHolder::accountHolderCounter;

AccountHolder::AccountHolder(string fn,string mn,string ln,long CNIC,string add,long tpn,int day,int mon,int year):dob(day,mon,year)
{
	// TODO Auto-generated constructor stub
	firstName=fn;
	middleName=mn;
	lastName=ln;
	cnic=CNIC;
	address=add;
	telephoneNnumber=tpn;
	accountHolderCounter++;
	id=accountHolderCounter;
	accounts=new Account*[10];
	asize=10;
	nAccounts=0;

}
string AccountHolder::getFrstName(){ return firstName; }
string AccountHolder::getMiddleName(){ return middleName; }
string AccountHolder::getLastName(){ return lastName; }
long AccountHolder::getCnic(){ return cnic; }
string AccountHolder::getAddress(){ return address; }
long AccountHolder::getTelephoneNumber(){ return telephoneNnumber; }
long AccountHolder::getId(){ return id; }
DateOfBirth& AccountHolder::getDOB(){ return dob; }
void AccountHolder::setAddress(string a){ address=a; }
void AccountHolder::setTelephoneNumber(long tn){ telephoneNnumber=tn; }
Account& AccountHolder::getAccount(long acn)
{
	for (int i=0;i<nAccounts;i++)
	{
		if (accounts[i]->getAccountNumber()==acn)
			return *(accounts[i]);
	}
}
void AccountHolder::doubleArray()
{
	Account** na=new Account*[asize*2];
	for (int i=0;i<nAccounts;i++)
		na[i]=accounts[i];
	delete[] accounts;
	accounts=na;
	asize*=2;
}
void AccountHolder::addAccount(int t,int ct,long am)
{
	if (nAccounts==asize)doubleArray();
	accounts[nAccounts]=new Account(t,ct,am);
	nAccounts++;
}
void AccountHolder::display(ostream& out)
{
	out<<"first name: "<<firstName<<endl;
	out<<"middle name: "<<middleName<<endl;
	out<<"last name: "<<lastName<<endl;
	out<<"CNIC: "<<cnic<<endl;
	out<<"address: "<<address<<endl;
	out<<"telephone number: "<<telephoneNnumber<<endl;
	out<<"Date Of Birth: "<<dob.getDate()<<"/"<<dob.getMonth()<<"/"<<dob.getYear()<<endl;
	out<<"with accounts: "<<endl;
	for (int i=0;i<nAccounts;i++)
		out<<"Account "<<i+1<<accounts[i]->getAccountNumber()<<endl;
}
AccountHolder::~AccountHolder() {
	// TODO Auto-generated destructor stub
}
ostream& operator<<(ostream& out,AccountHolder& ah)
{
	ah.display(out);
	return out;
}
