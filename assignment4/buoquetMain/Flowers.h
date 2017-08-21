/*
 * Flowers.h
 *
 *  Created on: Apr 3, 2017
 *      Author: abdullah
 */

#ifndef FLOWERS_H_
#define FLOWERS_H_
#include <iostream>
#include <string>
using namespace std;
class Flowers {
	string name;
	string color;
	float perUnitPrice;
	bool perfumed;
	bool onSale;
public:
	Flowers(string n,string c,float pup,bool prfmd=false,bool onSl=false);
	float getPrice();//returns the base price and its half of flower in on sale
	bool perfume();//tells wether the flower is perfumed or not
	bool operator==(const Flowers &f);//tells wether the flowers are same or not
	string getName();
	string getColor();
	bool getSaleStatus();
	//void setPerfume(bool st);
	//void setSaleStatus(bool st);
	~Flowers();
};
ostream& operator<<(ostream &out,Flowers &f);
#endif /* FLOWERS_H_ */
