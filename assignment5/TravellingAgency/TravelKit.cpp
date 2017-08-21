/*
 * TravelKit.cpp
 *
 *  Created on: Apr 15, 2017
 *      Author: abdullah
 */

#include "TravelKit.h"

TravelKit::TravelKit(string dp,string dt) {
	// TODO Auto-generated constructor stub
	options=0;
	departure=dp;
	destination=dt;
	asize=10;
	tr=new TravelOption*[10];
}
double TravelKit::price()
{
	double rt=0;
	for (int i=0;i<options;i++)
	{
		rt+=tr[i]->price();
	}
	return rt;
}
void TravelKit::Cancel()
{
	options=0;
	asize=10;
	delete[] tr;
	tr=new TravelOption*[10];
}
TravelKit::~TravelKit() {
	// TODO Auto-generated destructor stub
	delete[] tr;
}

void TravelKit::doubleArray()
{
	TravelOption** nA=new TravelOption*[asize*2];
	for (int i=0;i<options;i++)
		nA[i]=tr[i];
	delete[] tr;
	tr=nA;
	asize*=2;
}
void TravelKit::AddOption(TravelOption &t)
{
	if (options==asize)
		doubleArray();
	tr[options]=&t;
	options++;
}
void TravelKit::display(ostream& out)
{
	out<<"Travel from "<<departure<<" to "<<destination;
	if (options==0)
	{
		out<<": You have not reserved yet!"<<endl;
		return ;
	}
	out<<", With these options: "<<endl;
	for (int i=0;i<options;i++)
	{
		tr[i]->display(out);
		out<<endl;
	}
	out<<"Total Price: "<<price()<<endl;
}
ostream& operator<<(ostream& out,TravelKit& t)
{
	t.display(out);
	return out;
}
