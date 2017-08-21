//============================================================================
// Name        : buoquetMain.cpp
// Author      : Muhammad Abdullah Cheema
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include "Buoquet.h"
int main() {
// example of Yellow oderless rose.
 Flowers r1("Rose", "Yellow", 1.5);
 cout << r1 << endl;
 // example of Yellow parfumed rose
 Flowers r2("Rose", "Yellow", 3.0, true);
 // example of parfumed Red rose on sale
 Flowers r3("Rose", "Red", 2.0, true, true);
 Buoquet b1;
 b1 += r1; // add one Flower of r1 type
 b1 += r1; // add another Flower of r1
 b1 += r2;
 b1 += r3;
 cout << b1 << endl;

 b1 = b1 - r1; // Delete all the Flowers of type r1
 cout << b1 << endl;

 Buoquet b2;
 b2 = b1 + r1; // Add one Flower of type r1
 cout << b2 << endl;

 // Delete all the parfumed flowers from the bouquet.
 b2 -= r2;
 b2 -= r3;
 cout << b2;
 return 0;
 }
