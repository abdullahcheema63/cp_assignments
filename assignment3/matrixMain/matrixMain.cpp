//============================================================================
// Name        : matrixMain.cpp
// Author      : Muhammad Abdullah Cheema
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include "Matrix.h"
int main()
{
	Matrix a(2,2);
	Matrix b(2,2);
	a.input();
	b.input();
	Matrix c=a.add(50);
	a.display();cout<<endl;
	b.display();cout<<endl;
	c.display();cout<<endl;
	return 0;
}
