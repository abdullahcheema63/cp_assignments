/*
 * Dragon.h
 *
 *  Created on: Apr 10, 2017
 *      Author: abdullah
 */

#ifndef DRAGON_H_
#define DRAGON_H_

#include "Creatures.h"

class Dragon: public Creatures {
	int flamerange;
public:
	Dragon(string n,int l,int hp,int f,int fr,int p=0);
	void Fly(int p);//moves the dragon to given position
	void BlowFlame(Creatures& c);
	~Dragon();
};

#endif /* DRAGON_H_ */
