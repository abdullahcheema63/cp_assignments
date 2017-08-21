/*
 * Hotel.h
 *
 *  Created on: Apr 13, 2017
 *      Author: abdullah
 */

#ifndef HOTEL_H_
#define HOTEL_H_

#include "TravelOption.h"

class Hotel:virtual public TravelOption {
	int numNights;
	double pricePerNight;
public:
	Hotel(string n,double fFee,int nN,double ppn);
	double price();
	virtual ~Hotel();
};

#endif /* HOTEL_H_ */
