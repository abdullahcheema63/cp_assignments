/*
 * Molecule.h
 *
 *  Created on: Mar 22, 2017
 *      Author: abdullah
 */
#include "Bond.h"
#ifndef MOLECULE_H_
#define MOLECULE_H_

class Molecule {
	Bond *mol;
	int bonds;
public:
	Molecule();//default constructor
	Molecule(int bnds);//parametrizzed constructor
	Molecule (const Atom &a1);//for single atom elements
	Molecule (const Atom &a1,const Atom &a2);
	Molecule (const Atom &a1,const Atom &a2,const Atom &a3);
	Molecule (const Atom &a1,const Atom &a2,const Atom &a3,const Atom &a4);
	Molecule(const Molecule &mol);//copy constructor
	Bond AddBond(const Bond &bnd);
	void PrintFormula()const ;

	~Molecule();
};

#endif /* MOLECULE_H_ */
