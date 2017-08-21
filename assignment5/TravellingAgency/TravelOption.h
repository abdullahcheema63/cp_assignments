/*
 * TravelOption.h
 *
 *  Created on: Apr 13, 2017
 *      Author: abdullah
 */

#ifndef TRAVELOPTION_H_
#define TRAVELOPTION_H_
#include <iostream>
#include <string>
using namespace std;
class TravelOption {
protected:
	string nam;
	double flatFee;
public:
	TravelOption(string n,double fFee);
	string name();
	virtual double price();
	void display(ostream& out);
	virtual ~TravelOption();
};
ostream& operator<<(ostream& out,TravelOption& t);
#endif /* TRAVELOPTION_H_ */
