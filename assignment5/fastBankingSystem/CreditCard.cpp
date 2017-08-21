/*
 * CreditCard.cpp
 *
 *  Created on: Apr 15, 2017
 *      Author: abdullah
 */

#include "CreditCard.h"
long CreditCard::cardCounter=0;
CreditCard::CreditCard(int t) {
	// TODO Auto-generated constructor stub
	type=t;
	cardCounter++;
	cardNumber=cardCounter;
	if (type==1)
	{
		interest=0.18;
		limit=50000;
	}
	else if (type==2)
	{
		interest=0.10;
		limit=100000;
	}
	else if(type==3)
	{
		interest=0.25;
		limit=10000;
	}
}
CreditCard::~CreditCard() {
	// TODO Auto-generated destructor stub
}

float CreditCard::getInterest(){ return interest; }
int CreditCard::getType(){ return type; }
long CreditCard::getLimit(){ return limit; }
long CreditCard::getCardNumber(){ return cardNumber; }



