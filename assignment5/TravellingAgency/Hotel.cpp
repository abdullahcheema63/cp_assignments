/*
 * Hotel.cpp
 *
 *  Created on: Apr 13, 2017
 *      Author: abdullah
 */

#include "Hotel.h"

Hotel::Hotel(string n,double fFee,int nN,double ppn):TravelOption(n,fFee) {
	// TODO Auto-generated constructor stub
	numNights=nN;
	pricePerNight=ppn;
}
double Hotel::price()
{
	return (numNights*pricePerNight)+flatFee;
}
Hotel::~Hotel() {
	// TODO Auto-generated destructor stub
}

