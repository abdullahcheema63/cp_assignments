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
	cin>>a;
	b.input();
	Matrix c=a.add(50);
	cout<<a;cout<<endl;
	cout<<b;cout<<endl;
	cout<<c;cout<<endl;
	return 0;
}
