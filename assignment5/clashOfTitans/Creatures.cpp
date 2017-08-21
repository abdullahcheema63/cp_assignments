/*
 * Creatures.cpp
 *
 *  Created on: Apr 10, 2017
 *      Author: abdullah
 */

#include "Creatures.h"

Creatures::Creatures(string n,int l,int hp,int f,int p)
{
	name=n;
	level=l;
	health_status=hp;
	force=f;
	pos=p;
}
bool Creatures::alive()
{
	return health_status;
}
int Creatures::AttackPoints()
{
	return level*force;
}
void Creatures::Move(int a)
{
	pos+=a;
}
void Creatures::GoodBye()
{
	cout<<name<<" is no more!";
}
void Creatures::Weak(int hp)
{
	if (health_status<=0)
	{
		GoodBye();
		return;
	}
	health_status-=hp;
}
void Creatures::display()
{
	cout<<name<<", Level: "<<level<<", hath_status: "<<health_status<<", force: "<<force
			<<", Attacking Points: "<<AttackPoints()<<", position: "<<pos<<endl;
}
int Creatures::position()
{
	return pos;
}
Creatures::~Creatures()
{

}
