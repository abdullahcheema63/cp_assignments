/*
 * String.h
 *
 *  Created on: Mar 17, 2017
 *      Author: abdullah
 */
#include <iostream>
using namespace std;

#ifndef STRING_H_
#define STRING_H_

class String {
	int len;
	char *strr;
	public:
	String();//default constructor
	String(char *str);//initialize the string with a constant cstring
	String(const String &s);//copy constructor to initialize the string from existing string
	String& operator=(const String &str);
	String(int x);//initialize the string with a predefined size
	char getAt(int i);//return the character at index [i]
	void setAt(int i,char c);	//set the character at index [i]
	char& operator[](int i);
	String substr(int pos,int l);//rerturn the string of length len starting at position pos
	String substr(int pos);//return the substring from current position to the end
	void append(char a);//appends the character at the end of string
	void append(const String &str);//append the string at the end of the string
	void append(char *str);//append the constant cstring at the end of string
	int length();//return the length of string
	char *tocstring();//converts the string to c string
	void display();//displays the string
	bool isEmpty();//returns empty if string is true
	void copy(const String &s);//copy one string to another
	void copy (const char* s);//copy cstring to string
	int find(char a);//returns the index of the character being searched
	bool equal(const String &s);//should return true if both strings are true
	int stoi();//function for converting string to integer
	void split(char token,String *&s,int &ntokens);
	/*should split the string according
	to given token and store all substrings in a dynamic array passed as second
	argument, and return ntokens in third argument.*/
	bool isanagram(const String &s);
	/*return true if the given string is the anagram of the input string
	 * a string is the anagram of another string if it contains exactly same characters
	 * but might be different order of appearance
	 */
	~String();//destructor
};

#endif /* STRING_H_ */
