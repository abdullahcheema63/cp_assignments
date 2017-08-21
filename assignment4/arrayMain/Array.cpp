/*
 * Array.cpp
 *
 *  Created on: Mar 20, 2017
 *      Author: abdullah
 */

#include "Array.h"

Array::Array() {
	// TODO Auto-generated constructor stub
	array=NULL;
	s=0;
}
Array::Array(int size)
{
	array=new int[size];
	s=size;
}
Array::Array(int *arr,int size)
{
	array=new int[size];
	s=size;
	for (int i=0;i<size;i++)array[i]=arr[i];
}
Array::Array(const Array &a)
{
	s=a.s;
	for (int i=0;i<s;i++)
	{
		array[i]=a.array[i];
	}
}
int Array::getAt(int i)
{
	assert(i<s);
	return array[i];
}
void Array::setAt(int i,int val)
{
	assert(i<s);
	array[i]=val;
}
int *Array::subArrPointer(int pos,int size)
{
	assert((pos+size)<s);
	int *rt=new int[size];
	for (int i=0;i<size;i++)
	{
		rt[i]=array[pos];
		pos++;
	}
	return rt;
}
int *Array::subArrPointer(int pos)
{
	assert(pos<s);
	int t=s-pos;
	int *rt=new int[t];
	for (int i=0;i<t;i++)
	{
		rt[i]=array[pos];
		pos++;
	}
	return rt;
}
Array Array::subArr(int pos,int siz)
{
	assert((pos+siz)<s);
	Array temp(this->subArrPointer(pos,siz),siz);
	return temp;
}
Array Array::subArr(int pos)
{
	assert(pos<s);
	Array temp(this->subArrPointer(pos),s-pos);
	return temp;
}
void Array::push_back(int a)
{
	if (!array)return;
	int *temp=new int[s+1];
	for (int i=0;i<s;i++)
		temp[i]=array[i];
	temp[s]=a;
	delete[] array;
	array=temp;
	s++;
}
int Array::pop_back()
{
	assert(array);
	int *temp=new int[s-1];
	for (int i=0;i<s-1;i++)
		temp[i]=array[i];
	int rt=array[s-1];
	delete[] array;
	array=temp;
	s--;
	return rt;
}
int Array::insert(int idx,int val)
{
	if (idx<s)
	{
		int *endTemp=subArrPointer(idx);
		int *startTemp=subArrPointer(0,idx);
		assert(array);
		delete[] array;
		array=new int[s+1];
		for (int i=0;i<idx;i++)
			array[i]=startTemp[i];
		array[idx]=val;
		for (int i=idx+1,j=0;i<s+1;i++,j++)
			array[i]=endTemp[j];
		s++;
		delete[] startTemp;
		delete[] endTemp;
		return 1;
	}
	else return -1;

}
int Array::erase(int idx,int val)
{
	if (idx<s)
	{
		int* startTemp=subArrPointer(0,idx);
		int *endTemp=subArrPointer(idx+1);
		assert(array);
		delete[] array;
		array=new int[s-1];
		for (int i=0;i<idx;i++)
			array[i]=startTemp[i];
		for (int i=idx,j=0;i<s;i++,j++)
			array[i]=endTemp[j];
		s--;
		delete[] startTemp,endTemp;
		return 1;
	}
	else return -1;
}
void Array::size()
{
	return;
}
int Array::length()
{
	return s;
}
void Array::clear()
{
	if (!array) delete[] array;
	array=NULL;
	s=0;
}
int Array::value(int idx)
{
	return getAt(idx);
}
void Array::assign(int idx,int val)
{
	return setAt(idx,val);
}
void Array::copy(const int*arr,int siz)
{
	if (!array)delete[] array;
	array=new int[siz];
	for (int i=0;i<siz;i++)
		array[i]=arr[i];
	s=siz;
}
void Array::copy(const Array &Arr)
{
	return copy(Arr.array,Arr.s);
}
void Array::display()
{
	for (int i=0;i<s;i++)
		cout<<array[i]<<" ";
}
bool Array::isEmpty()
{
	return ((!array)&&(s<=0));
}
Array Array::find(int a)
{
	int count=0;
	for (int i=0;i<s;i++)
	{
		if (array[i]==a)
		{
			count++;
		}
	}
	int *temp=new int[count];
	for (int i=0,j=0;i<s;i++)
	{
		if (array[i]==a)
		{
			temp[j]=i;
			j++;
		}
	}
	Array tem(temp,count);
	return tem;
}
bool Array::equal(const Array &a)
{
	if (s!=a.s)return false;
	for (int i=0;i<s;i++)
	{
		if (array[i]!=a.array[i])return false;
	}
	return true;
}
bool Array::sort()
{
	bool rt=false;
	for (int j=0;j<s;j++)
	{
		for (int i=0;i<s-1;i++)
		{
			if (array[i]>array[i+1])
			{
				int temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
	}
	return rt;
}
void Array::reverse()
{
	assert(array);
	int *temp=new int[s];
	for (int i=0,j=s-1;i<s;i++,j--)
	{
		temp[i]=array[j];
	}
	delete[] array;
	array=temp;
}
int &Array::operator [](int i)
{
	assert(i<s&&i>=0);
	return array[i];
}
Array& Array::operator =(const Array& arr)
{
	this->copy(arr);
	return *this;
}
Array Array::operator +(const Array &arr)
{
	assert(this->s==arr.s);
	Array rarr(s);
	for (int i=0;i<s;i++)
	{
		rarr.array[i]=array[i]+arr.array[i];
	}
	return rarr;
}
Array Array::operator +(int a)
{
	Array c(s);
	for (int i=0;i<s;i++)
	{
		c.array[i]=array[i]+a;
	}
	return c;
}
Array& Array::operator++()
{

	for (int i=0;i<s;i++)
	{
		array[i]++;
	}
	return *this;
}
Array Array::operator -(const Array &arr)
{
	assert(this->s==arr.s);
	Array rarr(s);
	for (int i=0;i<s;i++)
	{
		rarr.array[i]=array[i]-arr.array[i];
	}
	return rarr;
}
Array Array::operator-(int a)
{
	Array rarr(s);
	for (int i=0;i<s;i++)
	{
		rarr.array[i]=array[i]-a;
	}
	return rarr;
}
Array& Array::operator --()
{
	for (int i=0;i<s;i++)
	{
		array[i]--;
	}
	return *this;
}
bool Array::operator ==(const Array &arr)
{
	return this->equal(arr);
}
bool Array::operator!()
{
	return (array==NULL);
}
void Array::operator +=(const Array &arr)
{
	(*this)=(*this)+arr;
}
void Array::operator-=(const Array &arr)
{
	(*this)=(*this)-arr;
}

Array::~Array() {
	// TODO Auto-generated destructor stub
	if (!array)delete[] array;
}

ostream& operator<<(ostream& out, Array& arr)
{
	for (int i=0;i<arr.length();i++)
	{
		out<<arr[i];
	}
	return out;
}
istream& operator>>(istream& inp,Array& arr)
{
	for (int i=0;i<arr.length();i++)
	{
		inp>>arr[i];
	}
	return inp;
}
