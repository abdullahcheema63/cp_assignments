/*
 * CreditCard.h
 *
 *  Created on: Apr 15, 2017
 *      Author: abdullah
 */
#include <cassert>
#include <iostream>
#include <string>
using namespace std;
#ifndef CREDITCARD_H_
#define CREDITCARD_H_
class CreditCard {
	static long cardCounter;
	int type;//1 for mastercard,2 for visa card,3 for local card
	long limit;
	float interest;
	long cardNumber;
public:
	CreditCard(int t);
	float getInterest();
	long getLimit();
	int getType();
	long getCardNumber();
	~CreditCard();
};

#endif /* CREDITCARD_H_ */
