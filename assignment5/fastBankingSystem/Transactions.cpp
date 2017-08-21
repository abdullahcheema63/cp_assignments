/*
 * Transactions.cpp
 *
 *  Created on: Apr 16, 2017
 *      Author: abdullah
 */

#include "Transactions.h"

Transactions::Transactions(	int t,long am) {
	// TODO Auto-generated constructor stub
	type=t;
	ammount=am;
	if (type==1)
		typeName="deposited";
	else if (type==2)
		typeName="withdrawn";
	else if (type==3)
		typeName="withdrawn by card";
}
void Transactions::display(ostream& out)
{
	out<<typeName<<" "<<ammount<<" PKR";
}
Transactions::~Transactions() {
	// TODO Auto-generated destructor stub
}
ostream& operator<<(ostream& out,Transactions& t)
{
	t.display(out);
	return out;
}
