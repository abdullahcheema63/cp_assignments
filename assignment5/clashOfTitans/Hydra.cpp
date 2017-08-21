/*
 * Hydra.cpp
 *
 *  Created on: Apr 10, 2017
 *      Author: abdullah
 */

#include "Hydra.h"

Hydra::Hydra(string n,int l,int hp,int f,int lneck,int psdode,int p):Creatures(n,l,hp,f,p)
{
	necklength=lneck;
	poisodose=psdode;
}
void Hydra::InjectPoison(Creatures& c)
{
	int disance=abs(c.position()-this->pos);
	if (this->alive()&&c.alive()&&disance<=necklength)
	{
		Weak(this->AttackPoints()+this->poisodose);
		if (!c.alive())
			level++;
	}
}
Hydra::~Hydra()
{

}
