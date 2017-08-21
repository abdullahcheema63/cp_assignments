/*
 * Flowers.cpp
 *
 *  Created on: Apr 3, 2017
 *      Author: abdullah
 */

#include "Flowers.h"

Flowers::Flowers(string n,string c,float pup,bool prfmd,bool onSl) {
	// TODO Auto-generated constructor stub
	name=n;
	color=c;
	perUnitPrice=pup;
	perfumed=prfmd;
	onSale=onSl;
}
float Flowers::getPrice()
{
	if (onSale)
		return perUnitPrice/2;
	return perUnitPrice;
}
bool Flowers::perfume()
{
	return perfumed;
}
bool Flowers::operator==(const Flowers &f)
{
	return (name==f.name&&color==f.color&&perfumed==f.perfumed);
}
string Flowers::getName(){return name;}
string Flowers::getColor(){return color;}
bool Flowers::getSaleStatus(){ return onSale;}
Flowers::~Flowers() {
	// TODO Auto-generated destructor stub
}
ostream& operator<<(ostream& out,Flowers &f)
{
	out<<f.getName()<<" "<<f.getColor()<<" "<<f.perfume()<<" Price: "<<f.getPrice()<<" Rs.";
	return out;
}
