/*
 * Buoquet.h
 *
 *  Created on: Apr 3, 2017
 *      Author: abdullah
 */

#ifndef BUOQUET_H_
#define BUOQUET_H_
#include "Flowers.h"
class Buoquet {
	Flowers** array;
	int size;
	int capacity;
public:
	Buoquet();
	Buoquet(int c);
	Buoquet(Buoquet &b);
	Buoquet& operator=(Buoquet &b);
	bool perfume();
	float price();
	void operator+=(Flowers &f);
	void operator-=(Flowers &f);
	Buoquet& operator+(Flowers& f);
	Buoquet& operator-(Flowers& f);
	Flowers& getFlower(int i);
	int getSize();
	int getCapacity();
	~Buoquet();
};
ostream& operator<<(ostream& out,Buoquet &b);
#endif /* BUOQUET_H_ */
