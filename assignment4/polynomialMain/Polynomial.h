/*
 * Polynomial.h
 *
 *  Created on: Apr 3, 2017
 *      Author: abdullah
 */

#ifndef POLYNOMIAL_H_
#define POLYNOMIAL_H_
#include <iostream>
using namespace std;
class Polynomial {
	int *poly;
	int degree;
public:
	Polynomial();//default constructor
	Polynomial(int a);//parametrized constructor receiving the highest degree
	Polynomial(const Polynomial &p);//copy constructor
	Polynomial& operator=(const Polynomial &p);//assigns a polynomial and returns the same
	bool operator==(const Polynomial& p);//compares and returns true if both are equal
	Polynomial operator+(const Polynomial &p);//adds two polynomial and returns he result
	Polynomial operator-(const Polynomial &p);//subtracts two polynomial and returns the result
	int operator()(int a);
	int getDegree();
	void operator+=(const Polynomial &p);
	void operator-=(const Polynomial &p);

	~Polynomial();
};
ostream& operator<<(ostream& input, const Polynomial &p);
istream& operator>>(istream& ouput, Polynomial &p);
#endif /* POLYNOMIAL_H_ */
