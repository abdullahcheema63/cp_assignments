/*
 * Transport.cpp
 *
 *  Created on: Apr 15, 2017
 *      Author: abdullah
 */

#include "Transport.h"
const double Transport::LONG_TARIF=1500.0;
const double Transport::BASIC_TARIF=200.0;
Transport::Transport(string n,double fFee,bool lT):TravelOption(n,fFee) {
	// TODO Auto-generated constructor stub
	longTrip=lT;
}
double Transport::price()
{
	if (longTrip)return LONG_TARIF+flatFee;
	return BASIC_TARIF+flatFee;
}
Transport::~Transport() {
	// TODO Auto-generated destructor stub
}

