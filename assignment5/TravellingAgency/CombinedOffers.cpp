/*
 * CombinedOffers.cpp
 *
 *  Created on: Apr 15, 2017
 *      Author: abdullah
 */

#include "CombinedOffers.h"

CombinedOffers::CombinedOffers(string n,double fFee,int nN,double ppn,bool lT):TravelOption(n,fFee),Hotel(n,fFee,nN,ppn),Transport(n,fFee,lT) {
	// TODO Auto-generated constructor stub

}
double CombinedOffers::price()
{
	return 0.75*((Hotel::price())+(Transport::price()));
}
CombinedOffers::~CombinedOffers() {
	// TODO Auto-generated destructor stub
}

