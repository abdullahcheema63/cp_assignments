/*
 * Creatures.h
 *
 *  Created on: Apr 10, 2017
 *      Author: abdullah
 */

#ifndef CREATURES_H_
#define CREATURES_H_
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Creatures {
protected:
	string name;
	int level;
	int health_status;
	int force;
	int pos;

public:
	Creatures(string n,int l,int hp,int f,int p=0);
	bool alive();//returns true if creature is alive means hp is greater then 0 and false otherwise
	int AttackPoints();//returns the attack points computed as level multiplied by force
	void Move(int a);//adds the integer a to the position of the position of creature
	void GoodBye();//returns nothing but prints <name> is no more!
	void Weak(int hp);//subtracts from health points if creature alive else calls goodbye
	void display();//rerturns nothing but displays strictly acording to format
	int position();
	~Creatures();
};

#endif /* CREATURES_H_ */
