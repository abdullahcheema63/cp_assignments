//============================================================================
// Name        : i160033_cpLab1.cpp
// Author      : Muhammad Abdullah Cheema
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================
#include<iostream>
//#include <cstring>
using namespace std;
int StrCmp(const char* s1,const char* s2)
{
	for (int i=0;s1[i]!='\0'||s2[i]!='\0';i++)
	{
		if (s1[i]!=s2[i])
			return (int(s1[i])-int(s2[i]));
	}
	return 0;
}
char** StrTok(char* s1,const char s2,int &token)
{
	int len;token=0;
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
	//const char *alphabets=new char[46];
	char alphabets[74]=" ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789.,?\'!/()&";
	const char *morse[74]={"/",".-","-...","-.-.","-..",".","..-.","--.","....",".."
			,".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",
			"..-","...-",".--","-..-","-.--","--..",".-","-...","-.-.","-..",".","..-.","--.","....",".."
			,".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",
			"..-","...-",".--","-..-","-.--","--..","-----",".----","..---","...--"
			,"....-",".....","-....","--...","---..","----.",".-.-.-","--..--",
			"..--..",".----.","-.-.--","-..-.","-.--.","-.--.-",".-..."};


	int type;
	cout<<"select your desired option"<<endl;
	cout<<"1. to convert text to morse code"<<endl;
	cout<<"2. to convert morse code to text"<<endl<<endl;
	cout<<"please select: ";
	cin>>type;
	char *input=new char[500];
	cout<<"please enter the required string: ";
	cin.ignore(10,'\n');
	cin.getline(input,500);
	cout<<"your desired input is (line truncated in case of greater then 500 characters): \'";
	cout<<input; cout<<"\'"<<endl;

	if (type==1)
	{
		for(int i=0,j=0;input[i]!='\0';i++)
		{
			char temp=input[i];
			for (j=0;alphabets[j]!=temp;j++);

			cout<<morse[j]<<" ";
		}
	}
	else if (type==2)
	{
		int tokens=0;
		char * temp;
		char **toks=StrTok(input,' ',tokens);
		for (int i=0;i<tokens;i++)
		{
			temp=toks[i];
			for (int j=0;j<72;j++)
			{
				if (StrCmp(temp,morse[j])==0)
				{
					cout<<alphabets[j];
					break;
				}


			}
		}

	}
	else
	{
		for (int i=0;i<46;i++)cout<<morse[i]<<endl;
		cout<<"wrong option selected. program terminated";
	}
	return 0;
}

