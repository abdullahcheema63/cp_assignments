/*
 * Bond.h
 *
 *  Created on: Mar 22, 2017
 *      Author: abdullah
 */
#include "Atom.h"
#ifndef BOND_H_
#define BOND_H_

class Bond {
	Atom a;
	Atom b;
public:
	Bond();//default constructor
	Bond(const Bond &bnd);//copy constructor
	Bond(const Atom &atm,const Atom &atm2);
	Bond AddBond(const Bond &bnd);
	Bond GetBond()const;
	~Bond();
};

#endif /* BOND_H_ */
