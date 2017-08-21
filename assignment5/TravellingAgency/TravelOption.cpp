/*
 * TravelOption.cpp
 *
 *  Created on: Apr 13, 2017
 *      Author: abdullah
 */

#include "TravelOption.h"

TravelOption::TravelOption(string n,double fFee) {
	// TODO Auto-generated constructor stub
	nam=n;
	flatFee=fFee;
}
string TravelOption::name()
{
	return nam;
}
double TravelOption::price()
{
	return flatFee;
}
void TravelOption::display(ostream& out)
{
	out<<nam<<" -> "<<price()<<" PKR";
}
TravelOption::~TravelOption() {
	// TODO Auto-generated destructor stub
}
ostream& operator<<(ostream& out,TravelOption& t)
{
	t.display(out);
	return out;
}
