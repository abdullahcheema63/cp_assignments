/*
 * Array.h
 *
 *  Created on: Mar 20, 2017
 *      Author: abdullah
 */
#include <iostream>
#include <cassert>
using namespace std;
#ifndef ARRAY_H_
#define ARRAY_H_

class Array {
	int *array;
	int s;
public:
	Array();//default constructor
	Array(int size);//a parameterized constructor to initialize an array of predefined size
	Array(int *arr,int size);//initialize an array with an existing array
	Array(const Array &a);//copy constructor
	int getAt(int i);//return the integer at index i
	void setAt(int i,int val);//set a value val at index i
	Array subArr(int pos,int siz);//returns the sub array of size siz starting from location pos
	Array subArr(int pos);//returns an array from a given position to the end
	int *subArrPointer(int pos,int size);//returns an array of size siz starting from location pos
	int *subArrPointer(int pos);//returns an array from the given position to the end
	void push_back(int a);//adds an element to the end of the array
	int pop_back();//removes and returns the last element of the array
	int insert(int idx,int val);/*inserts the value val at idx. Returns 1 for a.
	* successful insertion and -1 if idx does not exists or is invalid. Shift the
	* elements after idx to the right*/
	int erase(int idx,int val);/* erases the value val at idx. Returns 1 for a
	successful deletion and -1 if idx does not exists or is invalid. Shift the
	elements after idx to the left.*/
	void size();
	int length();//returns the length of array
	void clear();//clears the content of array
	int value(int idx);//returns the value at idx
	void assign(int idx, int val);//assigns the value val to the element at index idx
	void copy(const Array& Arr);// Copy the passed Array
	void copy(const int * arr, int siz);// copy the passed array
	void display();// displays the Array
	bool isEmpty();// returns true if the Array is empty
	Array find(int a);// returns an Array containing all the indexes of integer being searched
	bool equal(const Array &a);//should be true if both arrays are same
	bool sort();//sorts the array, returns true if the array has already been sorted
	void reverse();//reverses the content of the array
	int &operator[](int i);//returns the integer at index i
	Array& operator=(const Array& arr);
	Array operator+(const Array & arr);
	Array operator+(int a);
	Array& operator++();
	Array operator-(const Array &arr);
	Array operator-(int a);
	Array& operator--();
	bool operator==(const Array &arr);
	bool operator!();
	void operator+=(const Array &arr);
	void operator-=(const Array &arr);
	~Array();
};
ostream& operator<<(ostream& out, const Array&);
istream& operator>>(istream& inp, Array&);
#endif /* ARRAY_H_ */
