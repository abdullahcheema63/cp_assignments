/*
 * Buoquet.cpp
 *
 *  Created on: Apr 3, 2017
 *      Author: abdullah
 */

#include "Buoquet.h"

Buoquet::Buoquet() {
	// TODO Auto-generated constructor stub
	capacity=10;
	size=0;
	array=new Flowers*[capacity];
}
Buoquet& Buoquet::operator =(Buoquet &b)
{
	if (this==&b)return *this;
	delete[] array;
	array=new Flowers*[b.capacity];
	for (int i=0;i<b.size;i++)
	{
		array[i]=b.array[i];
	}
	capacity=b.capacity;
	size=b.size;
	return *this;
}
Buoquet::Buoquet(Buoquet& b) {

	*this=b;
}
Buoquet::Buoquet(int c)
{
	array=new Flowers*[c];
	size=0;
	capacity=c;
}
Buoquet& Buoquet::operator +(Flowers& f)
{
	Buoquet *rb=new Buoquet;
	*rb=*this;

	if (rb->size==rb->capacity)
	{
		Flowers** newArray=new Flowers*[capacity*2];
		for (int i=0;i<size;i++)newArray[i]=rb->array[i];
		delete [] rb->array;
		rb->array=newArray;
		rb->capacity*=2;
	}
	rb->array[size]=&f;
	rb->size++;
	return *rb;
}
Buoquet& Buoquet::operator-(Flowers &f)
{
	int count=0;
	for (int i=0;i<size;i++)
		if (array[i]==&f)count++;
	int* found=new int[count];
	for (int i=0,j=0;i<size;i++)
	{
		if (array[i]==&f)
		{
			found[j]=i;
			j++;
		}
	}
	for (int i=0;i<count;i++)
	{
		array[found[i]]=NULL;
	}
	delete[] found;
	Flowers** newArray=new Flowers*[capacity];
	for (int i=0,j=0;i<size;i++)
	{
		if (array[i]!=NULL)
		{
			newArray[j]=array[i];
			j++;
		}
	}
	Buoquet* rb=new Buoquet;
	rb->array=newArray;
	rb->capacity=capacity;
	rb->size=size-count;
	return *rb;
}
void Buoquet::operator +=(Flowers &f)
{
	(*this)=(*this)+f;
}
void Buoquet::operator -=(Flowers &f)
{
	(*this)=(*this)-f;
}
Flowers& Buoquet::getFlower(int i)
{
	return *(array[i]);
}
int Buoquet::getSize()
{
	return size;
}
int Buoquet::getCapacity()
{
	return capacity;
}
bool Buoquet::perfume()
{
	for (int i=0;i<size;i++)
	{
		if (array[i]->perfume())return true;
	}
	return false;
}
float Buoquet::price()
{
	float p=0;
	for (int i=0;i<size;i++)
	{
		p+=array[i]->getPrice();
	}
	if (perfume())return p*2;
	return p;
}
Buoquet::~Buoquet() {
	// TODO Auto-generated destructor stub
	delete[] array;
}

ostream& operator<<(ostream& out,Buoquet &b)
{
	for (int i=0;i<b.getSize();i++)
	{
		out<<b.getFlower(i)<<endl;
	}
	return out;
}
