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
	String(int x);//initialize the string with a predefined size
	char& getAt(int i);//return the character at index [i]
	char& operator[](int i);//returns character at index i
	void setAt(int i,char c);	//set the character at index [i]
	String substr(int pos,int l);//rerturn the string of length len starting at position pos
	String substr(int pos);//return the substring from current position to the end
	void append(char a);//appends the character at the end of string
	String &operator+(char &str);//appends the character at the end of string
	void append(const String &str);//append the string at the end of the string
	String &operator+(const String &str);//append string at the end of string
	void append(char *str);//append the constant cstring at the end of string
	String &operator+(char *str);//appends constant cstring at the end of string
	int length();//return the length of string
	char *tocstring();//converts the string to c string
	void display();//displays the string
	bool isEmpty();//returns true if the string is empty
	bool operator!();//return true if the string is empty
	void copy(const String &s);//copy one string to another
	String& operator=(const String &s);//copy one atring to another
	void copy (const char* s);//copy cstring to string
	String& operator=(const char *s);//copy cstringto string
	int find(char a);//returns the index of the character being searched
	int operator()(char aa);//returns the index of character being searched
	String &operator*(int k);//multiplies the string k times
	bool equal(const String &s)const;//should return true if both strings are true
	bool operator==(const String &ss)const;//return true if both strings are true
	bool operator==(char *str)const;//returns true if cstring is equal to string
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
	char* getstr();
	~String();//destructor
};
ostream& operator<<(ostream &out, String& str);//outputs the string
ostream& operator>>(ostream& inp, String & str);//inputs the string
#endif /* STRING_H_ */
