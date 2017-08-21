/*
 * Transactions.h
 *
 *  Created on: Apr 16, 2017
 *      Author: abdullah
 */

#ifndef TRANSACTIONS_H_
#define TRANSACTIONS_H_
#include <iostream>
#include <string>
using namespace std;
class Transactions {
	int type;//1 for deposit, 2 for withdraw, 3 for withdraw by card
	long ammount;
	string typeName;
public:
	Transactions(int t,long am);
	void display(ostream& out);
	~Transactions();
};
ostream& operator<<(ostream& out,Transactions& t);
#endif /* TRANSACTIONS_H_ */
