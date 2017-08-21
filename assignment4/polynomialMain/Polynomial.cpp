/*
 * Polynomial.cpp
 *
 *  Created on: Apr 3, 2017
 *      Author: abdullah
 */

#include "Polynomial.h"

Polynomial::Polynomial() {
	// TODO Auto-generated constructor stub
	poly=NULL;
	degree=0;
}
Polynomial::Polynomial(int a)
{
	poly=new int[a+1];
	degree=a;
}

Polynomial::~Polynomial() {
	// TODO Auto-generated destructor stub
}

