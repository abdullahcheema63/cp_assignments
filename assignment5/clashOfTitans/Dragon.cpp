/*
 * Dragon.cpp
 *
 *  Created on: Apr 10, 2017
 *      Author: abdullah
 */

#include "Dragon.h"

Dragon::Dragon(string n,int l,int hp,int f,int fr,int p): Creatures(n,l,hp,f,p)
{
	flamerange=fr;
}
void Dragon::Fly(int p)
{
	pos=p;
}
void Dragon::BlowFlame(Creatures& c)
{
	int distance=abs(c.position()-this->pos);
	if (this->alive()&&c.alive()&&distance<=flamerange)
	{
		c.Weak(this->AttackPoints());
		this->Weak(distance);
		if (!c.alive())
			level++;
	}

}
Dragon::~Dragon()
{

}
