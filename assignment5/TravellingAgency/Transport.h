/*
 * Transport.h
 *
 *  Created on: Apr 15, 2017
 *      Author: abdullah
 */

#ifndef TRANSPORT_H_
#define TRANSPORT_H_

#include "TravelOption.h"

class Transport: public virtual TravelOption {
	bool longTrip;
	static const double LONG_TARIF;
	static const double BASIC_TARIF;
public:
	Transport(string n,double fFee,bool lT=false);
	double price();
	virtual ~Transport();
};

#endif /* TRANSPORT_H_ */
