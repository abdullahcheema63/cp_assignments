/*
 * Bond.cpp
 *
 *  Created on: Mar 22, 2017
 *      Author: abdullah
 */

#include "Bond.h"

Bond::Bond() {
	// TODO Auto-generated constructor stub
	a;
	b;
}
Bond::Bond(const Atom &atm,const Atom &atm2)
{
	a=atm;
	b=atm2;
}
Bond::Bond(const Bond &bnd)
{
	a=bnd.a;
	b=bnd.b;
}
Bond Bond::AddBond(const Bond &bnd)
{
	a=bnd.a;
	b=bnd.b;
}
Bond Bond::GetBond()const
{
	return *this;
}

Bond::~Bond() {
	// TODO Auto-generated destructor stub
}

