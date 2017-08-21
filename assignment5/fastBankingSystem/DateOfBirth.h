/*
 * DateOfBirth.h
 *
 *  Created on: Apr 15, 2017
 *      Author: abdullah
 */

#ifndef DATEOFBIRTH_H_
#define DATEOFBIRTH_H_

class DateOfBirth {
	int day;
	int month;
	int year;
public:
	DateOfBirth(int d,int m,int y);
	int getDate();
	int getMonth();
	int getYear();
	~DateOfBirth();
};
#endif /* DATEOFBIRTH_H_ */
