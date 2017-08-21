/*
 * CombinedOffers.h
 *
 *  Created on: Apr 15, 2017
 *      Author: abdullah
 */

#ifndef COMBINEDOFFERS_H_
#define COMBINEDOFFERS_H_

#include "Hotel.h"
#include "Transport.h"

class CombinedOffers: public virtual Transport, public virtual Hotel {
public:
	CombinedOffers(string n,double fFee,int nN,double ppn,bool lT=false);
	double price();
	virtual ~CombinedOffers();
};

#endif /* COMBINEDOFFERS_H_ */
