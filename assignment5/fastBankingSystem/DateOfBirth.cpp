/*
 * DateOfBirth.cpp
 *
 *  Created on: Apr 15, 2017
 *      Author: abdullah
 */

#include "DateOfBirth.h"

DateOfBirth::DateOfBirth(int d,int m,int y) {
	// TODO Auto-generated constructor stub
	day=d;
	month=m;
	year=y;
}
int DateOfBirth::getDate(){ return day; }
int DateOfBirth::getMonth(){ return month; }
int DateOfBirth::getYear(){ return year; }
DateOfBirth::~DateOfBirth() {
	// TODO Auto-generated destructor stub
}

