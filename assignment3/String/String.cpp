/*
 * String.cpp
 *
 *  Created on: Mar 17, 2017
 *      Author: abdullah
 */

#include "String.h"
char** StrTok(char* s1,const char s2,int &token)
{
	int len; token=0;
	for (len=0;s1[len]!='\0';len++)
	{
		if (s1[len]==s2)
		{
			token++;
		}
	}
	int tokLength[token+1];
	for (int i=0,k=0,j=0;i<=len;i++,k++)
	{
		if (s1[i]==s2||i==len)
		{
			tokLength[j]=k;
			k=0;
			j++;i++;
		}
	}
	char **splits=new char*[token+1];
	for (int i=0;i<token+1;i++)
	{
		splits[i]=new char[tokLength[i]];
	}

	for (int i=0,k=0,j=0;s1[i]!='\0';i++)
	{
		splits[k][j]=s1[i];
		if (s1[i]==s2)
		{
			splits[k][j]='\0';
			k++;
			j=0;
		}
		else j++;
	}
	return splits;
}
String::String() {
	// TODO Auto-generated constructor stub
	strr=NULL;
	len=0;
}
String::String(char *str)
{
	int l;
	for (l=0;str[l]!='\0';l++);
	strr=new char[l+1];
	for (int i=0;i<l;i++)
		strr[i]=str[i];
	strr[l]='\0';
	len=l;
}
String::String(const String &s)
{
	len=s.len;
	if (strr!=NULL)delete[] strr;
	strr=new char[len+1];
	for (int i=0;i<len;i++)strr[i]=s.strr[i];
	strr[len]='\0';
}
String::String(int x)
{
	strr=new char[x];
	len=x;
}
char String::getAt(int i)
{
	if (i>=len) return '\0';
	return strr[i];
}
void String::setAt(int i,char c)
{
	if (i>=len)return;
	strr[i]=c;
}
String String::substr(int pos)
{
	if (pos<len)
	{
		String temp(len-pos);
		for (int i=pos;i<len;i++)
		{
			temp.strr[i]=this->strr[i];
		}
		return temp;
	}
}
String String::substr(int pos,int l)
{
	if (pos<len&&(pos+l<len))
	{
		String temp(l);
		for (int i=pos;i<l+pos;i++)
		{
			temp.strr[i]=this->strr[i];
		}
		return temp;
	}
}
void String::append(char a)
{
	char *str=new char[len+2];
	int l;
	for (l=0;l<len;l++)
		str[l]=strr[l];
	str[l]=a;
	str[l+1]='\0';
	len+=1;
	delete[] strr;
	strr=new char[len+1];
	for (int i=0;i<len;i++)
		strr[i]=str[i];
	strr[len]='\0';
	delete[] str;
}
void String::append(char *str)
{
	for (int i=0;str[i]!='\0';i++)
		this->append(str[i]);
}
void String::append(const String &str)
{
	this->append(str.strr);
}
int String::length()
{
	return len;
}
char* String::tocstring()
{
	char* rstr=new char[len+1];
	for (int i=0;i<len;i++)
		rstr[i]=strr[i];
	rstr[len]='\0';
	return rstr;
}
void String::display()
{
	for (int i=0;i<len;i++)
		cout<<strr[i];
}
bool String::isEmpty()
{
	return !(strr);
}
void String::copy(const char* s)
{
	if (strr)
		delete[] strr;
	int l;
	for (l=0;s[l]!='\0';l++);
	len=l;
	strr=new char[len+1];
	for (int i=0;i<len;i++)
		strr[i]=s[i];
	strr[len]='\0';
}
void String::copy(const String &s)
{
	this->copy(s.strr);
}
int String::find(char a)
{
	int i;
	for (i=0;strr[i]!=a;i++);
	return i;
}
bool String::equal(const String &s)
{
	if (len!=s.len)return false;
	int i;
	for (i=0;strr[i]==s.strr[i];i++);
	if (i==len)return true;
	return false;
}
void String::split(char token,String* &s,int &ntokens)
{
	char**toks=StrTok(this->strr,token,ntokens);
	s=new String[ntokens+1];
	for (int i=0;i<ntokens+1;i++)
		s[i].copy(toks[i]);

}
bool isPresent(char*str,char a)
{
	for (int i=0;str[i]!='\0';i++)
	{
		if (str[i]==a) return true;
	}
	return false;
}
bool isPresent(char arr[],char a,int l)
{
	for (int i=0;i<l;i++)
	{
		if (arr[i]==a)return true;
	}
	return false;
}
bool String::isanagram(const String &s)
{
	char present[100];
	int p=0;
	for (int i=0;i<len;i++)
	{
		if (!isPresent(present,strr[i],p))
		{
			present[p]=strr[i];
			p++;
		}
	}
	char present2[100];
	int p2=0;
	for (int i=0;i<s.len;i++)
	{
		if (!isPresent(present2,s.strr[i],p2))
		{
			present2[p2]=s.strr[i];
			p2++;
		}
	}

	for (int i=0;i<p;i++)
	{
		if (!isPresent(s.strr,present[i])) return false;
	}
	for (int i=0;i<p2;i++)
	{
		if (!isPresent(strr,present2[i])) return false;
	}
	return true;
}
String::~String() {
	// TODO Auto-generated destructor stub
	if (strr!=NULL)delete[] strr;
}
