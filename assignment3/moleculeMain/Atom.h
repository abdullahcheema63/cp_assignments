/*
 * Atom.h
 *
 *  Created on: Mar 22, 2017
 *      Author: abdullah
 */
#include <iostream>
using namespace std;
#ifndef ATOM_H_
#define ATOM_H_

class Atom {
	char symbol;
public:
	Atom();//default constructor
	Atom(char s);//parametrized constructor
	Atom(const Atom &atm);//copy constructor
	char GetSymbol();//returns the symbol of the atom
	Atom AddAtom(const Atom &atm);
	Atom GetAtom()const;
	~Atom();
};

#endif /* ATOM_H_ */
