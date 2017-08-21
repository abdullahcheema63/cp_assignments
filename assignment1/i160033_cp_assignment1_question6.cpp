//============================================================================
// Name        : i160033_cpLab1.cpp
// Author      : Muhammad Abdullah Cheema
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>
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

void countLetters(char *string,int *&array,int &size)
{
	//'A'=65 and 'a'=97
	array=new int[26];
	size=0;
	for (int i=0;i<26;i++)
	{
		char temp1=65+i; char temp2=97+i;
		int count=0;
		for (int j=0;string[j]!='\0';j++)
		{
			if (string[j]==temp1||string[j]==temp2) count++;
		}
		array[i]=count;
		size++;
	}
}
void countWordsBasedOnLength(char *string,int *&array,int &size)
{
	/*---------------tokenizer---------------*/
	char s2=' ';
	int len,token=0;
	for (len=0;string[len]!='\0';len++)
	{
		if (string[len]==s2)
		{
			token++;
		}
	}
	int tokLength[token+1];
	for (int i=0,k=0,j=0;i<=len;i++,k++)
	{
		if (string[i]==s2||i==len)
		{
			tokLength[j]=k;
			k=0;
			j++;i++;
		}
	}
	/*---------------tokenizer---------------*/
	//tokLength contains the length of each word
	array=new int[10];
	for (int i=1;i<=9;i++)
	{
		int temp=0;
		for (int j=0;j<token+1;j++)
		{
			if (tokLength[j]==i)temp++;
		}
		array[i-1]=temp;
	}
	size=9;
}
void countingUniqueWords(char *string,char**&uwords,int *&array,int &size)
{
	int tokens=0;
	char** toks=StrTok(string,' ',tokens);
	uwords=new char*[tokens+1];
	array=new int[tokens+1];
	size=0;
	for (int i=0;i<tokens+1;i++)
	{
		char *temp=toks[i];
		int count=0;
		int uwordChecker=0;
		for (int j=0;j<size;j++)
		{
			if (StrCmp(uwords[j],temp)==0) uwordChecker=1;
		}
		if (uwordChecker==0)
		{
			for (int k=0;k<tokens+1;k++)
			{
				if (StrCmp(temp,toks[k])==0)
				{
					count++;
				}
			}
			uwords[i]=temp;
			array[i]=count;
			size++;
		}
		else if (uwordChecker==1)
			continue;
	}
}
int main()
{
	char *str="i am a boy. my name is abdullah abdullah";
	int *array; int size=0;
	char** uwords;
	//countLetters(str,array,size);
	//countWordsBasedOnLength(str,array,size);
	countingUniqueWords(str,uwords,array,size);
	//for (int i=0;i<size;i++) cout<<char(65+i)<<" = "<<array[i]<<endl;
	//for (int i=0;i<size;i++) cout<<i+1<<" = "<<array[i]<<endl;
	for (int i=0;i<size;i++)cout<<uwords[i]<<" = "<<array[i]<<endl;
	return 0;
}

