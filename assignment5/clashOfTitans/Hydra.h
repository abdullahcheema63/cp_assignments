/*
 * Hydra.h
 *
 *  Created on: Apr 10, 2017
 *      Author: abdullah
 */

#ifndef HYDRA_H_
#define HYDRA_H_

#include "Creatures.h"

class Hydra: public Creatures {
	int necklength;
	int poisodose;
public:
	Hydra(string n,int l,int hp,int f,int lneck,int psdode,int p=0);
	void InjectPoison(Creatures& c);

	~Hydra();
};

#endif /* HYDRA_H_ */
