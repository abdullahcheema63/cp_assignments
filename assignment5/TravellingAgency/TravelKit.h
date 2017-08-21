/*
 * TravelKit.h
 *
 *  Created on: Apr 15, 2017
 *      Author: abdullah
 */

#ifndef TRAVELKIT_H_
#define TRAVELKIT_H_
#include "Hotel.h"
#include "Transport.h"
class TravelKit {
	TravelOption** tr;
	string departure;
	string destination;
	int options;
	int asize;
	void doubleArray();
public:
	TravelKit(string dp,string dt);
	double price();
	void AddOption(TravelOption& t);
	void Cancel();
	void display(ostream& out);
	~TravelKit();
};
ostream& operator<<(ostream& out,TravelKit& t);
#endif /* TRAVELKIT_H_ */
