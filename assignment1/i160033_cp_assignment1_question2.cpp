//============================================================================
// Name        : i160033_cpLab1.cpp
// Author      : Muhammad Abdullah Cheema
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <time.h>
using namespace std;
int StrLen(const char* str)
{
	int i=0;
	while (str[i]!='\0')i++;
	return i;
}

int main()
{
	//reading from file
	ifstream file("1-4000.txt",ios::in);
	string fileWords[4000];
	if (file.is_open())
	{
		for (int i=0;i<4000;i++)
			file>>fileWords[i];
	}
	//converting to char*
	const char** words=new const char*[4000];
	for (int i=0;i<4000;i++)
	{
		words[i]=fileWords[i].c_str();
	}
	const char *hangman[20]={" ___________.._______",
	"| .__________))______|",
	"| | / /      ||",
	"| |/ /       ||",
	"| | /        ||.-''.",
	"| |/         |/  _  \\",
	"| |          ||  `/,|",
	"| |          (\\\\`_.'",
	"| |         .-`--'.",
	"| |        /Y . . Y\\",
	"| |       // |   | \\\\",
	"| |      //  | . |  \\\\",
	"| |     ')   |   |   (`",
	"| |          ||'||",
	"| |          || ||",
	"| |          || ||",
	"| |          || ||",
	"| |         / | | \\",
	"          |_`-' `-' | |"," "};
	srand(time(NULL));
	const char* word=words[rand()%4000];
	int len=StrLen(word);
	char hiddenWord[len];
	int i,hC=0;
	for (i=0;i<len;i++)
	{
		if ((i%3)==0)
			hiddenWord[i]=word[i];
		else
		{
			hiddenWord[i]='-';
			hC++;
		}
	}
	hiddenWord[i]='\0';
	//cout<<word<<endl;
	cout<<hiddenWord<<endl;
	int ntries=0,check=0;
	while (ntries<5&&hC>0)
	{
		char temp;
		check=0;
		cout<<"please enter character: ";
		cin>>temp;
		for (int i=0;word[i]!='\0';i++)
		{
			if (word[i]==temp)
			{
				if (hiddenWord[i]=='-')hC--;
				hiddenWord[i]=word[i];
				//hC--;
				check=1;
			}
		}
		if (check==1)
		{
			cout<<hiddenWord<<endl;
			continue;
		}
		else if (check==0)
		{
			ntries++;
			for (int k=0;k<(ntries)*4;k++)cout<<hangman[k]<<endl;
			cout<<"you have "<<5-ntries<<" left"<<endl;
		}
	}
	cout<<word<<endl;
	cout<<"do you want to play again(y/n): ";
	char again;
	cin>>again;
	if (again=='y')main();

	return 0;
}
