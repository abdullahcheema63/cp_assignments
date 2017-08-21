/*
 * Atom.cpp
 *
 *  Created on: Mar 22, 2017
 *      Author: abdullah
 */

#include "Atom.h"
Atom::Atom()
{// TODO Auto-generated constructor stub
	cout<<"plese enter the name of molecule: ";
	cin>>symbol;
}
Atom::Atom(char s) {

	symbol=s;
}
Atom::Atom(const Atom &atm)
{
	symbol=atm.symbol;
}
char Atom::GetSymbol()
{
	return symbol;
}
Atom Atom::GetAtom()const
{
	return *this;
}
Atom Atom::AddAtom(const Atom &atm)
{
	symbol=atm.symbol;
	return *this;
}
Atom::~Atom() {
	// TODO Auto-generated destructor stub
}

