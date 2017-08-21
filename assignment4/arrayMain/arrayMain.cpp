//============================================================================
// Name        : arrayMain.cpp
// Author      : Muhammad Abdullah Cheema
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include "Array.h"

int main()
{
	int arr[5]={4,3,5,5,5};
	int arr2[5]={2,5,4,6,7};
	Array a(arr,5);
	Array b(arr2,5);
	a.display();cout<<endl;
	a.insert(3,50);
	a.display();cout<<endl;
	a.erase(1,3);
	a.sort();
	a.display();cout<<endl;
	Array c=a.find(5);

	a.display();cout<<endl;

	return 0;
}
