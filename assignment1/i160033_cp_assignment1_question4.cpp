//============================================================================
// Name        : i160033_cpLab1.cpp
// Author      : Muhammad Abdullah Cheema
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================
#include<iostream>
using namespace std;

char* subStr(char *str,int pos,int len)
{
	char *ret1=new char[len];
	for (int i=0,j=pos;i<len;i++,j++)
		ret1[i]=str[j];

	return ret1;
}
int Strlen(char* str)
{
	int i=0;
	while (str[i]!='\0')
		i++
		;
	return i;
}
char* Strcpy(char *s1,const char* s2)
{
	int i=0;
	while (s2[i]!='\0')
		i++;
	for (int j=0;j<i;j++)
		s1[j]=s2[j];
	s1[i]='\0';
	return s1;

}
char* Strncpy(char *s1,const char* s2,size_t n)
{
	int i=0;
	while (s2[i]!='\0')
		i++;
	if (n<i)
	{	for (int j=0;j<n;j++)
			s1[j]=s2[j];
		s1[n]='\0';
	}
	return s1;

}
char* StrCat(char* s1,const char*s2)
{
	int n1=0,n2=0;
	while(s1[n1]!='\0') n1++;
	while (s2[n2]!='\0')
	{
		s1[n1+n2]=s2[n2];
		n2++;
	}

	s1[n1+n2]='\0';
	return s1;
}
char* StrnCat(char* s1,const char*s2,size_t n)
{
	int n1=0,n2=0;
	while(s1[n1]!='\0') n1++;
	while (n2<n)
	{
		s1[n1+n2]=s2[n2];
		n2++;
	}

	s1[n1+n2]='\0';
	return s1;
}
int StrCmp(const char* s1,const char* s2)
{
	for (int i=0;s1[i]!='\0'||s2[i]!='\0';i++)
	{
		if (s1[i]!=s2[i])
			return (int(s1[i])-int(s2[i]));
	}
	return 0;
}
int StrnCmp(const char* s1,const char* s2,size_t n)
{
	for (int i=0;i<n;i++)
	{
		if (s1[i]!=s2[i])
			return (int(s1[i])-int(s2[i]));
	}
	return 0;
}
int StrFind(char* s1, char *s2)
{
	for (int i=0;s1[i]!='\0';i++)
	{
		if (s1[i]==s2[0])
		{
			int j=0;
			for (int k=i;s2[j]!='\0';j++,k++)
			{
				if (s2[j]!=s1[k])
					break;
			}
			if (s2[j]=='\0')
				return i;
		}
	}
	return -1;
}
char** StrTok(char* s1,const char s2)
{
	int len,token=0;
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
int main()
{
	char name[]="hello abdu hel abdu";
	char *s1=new char[50];
	s1=name;
	char *s2="abdu";

	return 0;
}

