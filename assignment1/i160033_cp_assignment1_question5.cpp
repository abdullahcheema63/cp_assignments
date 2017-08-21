//============================================================================
// Name        : i160033_cpLab1.cpp
// Author      : Muhammad Abdullah Cheema
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <limits>
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
int main()
{
	char***files=new char**[50];
	char**fileNames=new char*[50];
	int fileCount=0;
	int selector=0;
	int nLines[50];
	while(1==1)
	{
		cout<<"MacMAds Notepad"<<endl<<endl;
		cout<<"Press 1. To Create a new file"<<endl;
		cout<<"Press 2. To View an existing file by giving file name"<<endl;
		cout<<"Press 3. To edit an existing file by giving its name"<<endl;
		cout<<"Press 4. To copy an existing file to a new file"<<endl;
		cout<<"Press 5. To delete an existing file by giving its name"<<endl;
		cout<<"Press 6. To view listof all files with the names"<<endl;
		cout<<"Press7. To Exit \n\nPLease select: ";
		cin>>selector;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');

		if (selector==1)
		{
			cout<<"Please enter the name of file: ";
			fileNames[fileCount]=new char[50];
			cin.getline(fileNames[fileCount],50);
			cout<<"Please enter the number of lines for "<<fileNames[fileCount]<<": ";
			cin>>nLines[fileCount];
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			files[fileCount]=new char*[nLines[fileCount]];
			cout<<"one line can contain 60 characters only extra characters will be truncated\n";
			for (int i=0;i<nLines[fileCount];i++)
			{
				cout<<i<<". ";
				files[fileCount][i]=new char[61];
				cin.getline(files[fileCount][i],60);
			}
			/*-------------user input code goes here-------------------*/


			/*-------------user input code goes here-------------------*/
			fileCount++;
			continue;
		}
		if (selector==2)
		{
			cout<<"Please enter a valid file name: ";
			char temp[50];
			cin.getline(temp,49);
			int fSearch=0;int fCheck=0;
			while (fSearch<fileCount)
			{
				if (StrCmp(temp,fileNames[fSearch])==0)
				{
					fCheck=1;
					break;
				}
				fSearch++;
			}
			if (fCheck==0)
			{
				cout<<"file not found"<<endl;
				continue;
			}
			else if (fCheck==1)
			{
				for (int i=0;i<nLines[fSearch];i++)
				{
					cout<<i<<". "<<files[fSearch][i]<<endl;
				}
				char choose;
				cout<<"\n\npress y to continue: ";cin>>choose;
				continue;
			}
		}
		if (selector==3)
		{
			//code goes here
			cout<<"Please enter an existing file name: ";
			char temp[50];
			cin.getline(temp,49);
			int eSearch=0;int eCheck=0;
			while (eSearch<fileCount)
			{
				if (StrCmp(temp,fileNames[eSearch])==0)
				{
					eCheck=1;
					break;
				}
				eSearch++;
			}
			if (eCheck==0)
			{
				cout<<"file not found"<<endl;
				continue;

			}
			else if (eCheck==1)
			{
				while (1==1)
				{
					cout<<"editing "<<fileNames[eSearch]<<endl;
					int tempLine;
					cout<<"please enter line number to edit: ";
					cin>>tempLine;
					cout<<tempLine<<". ";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(),'\n');
					cin.getline(files[eSearch][tempLine],60);
					cout<<"line "<<tempLine<<" of "<<fileNames[eSearch]<<" edited successfully\n";
					cout<<"press y to edit again: ";
					char cc;
					cin>>cc;
					if (cc!='y'||cc!='Y')break;
				}
				continue;
			}
		}
		if (selector==4)
		{

			cout<<"Please enter an existing file name: ";
			char temp[50];
			cin.getline(temp,49);
			int cSearch=0;int cCheck=0;
			while (cSearch<fileCount)
			{
				if (StrCmp(temp,fileNames[cSearch])==0)
				{
					cCheck=1;
					break;
				}
				cSearch++;
			}
			if (cCheck==0)
			{
				cout<<"file not found"<<endl;
				continue;

			}
			else if (cCheck==1)
			{

				cout<<"Please enter the name of new file to copy to: ";
				fileNames[fileCount]=new char[50];
				cin.getline(fileNames[fileCount],50);
				nLines[fileCount]=nLines[cSearch];
				files[fileCount]=new char*[nLines[fileCount]];
				for (int i=0;i<nLines[cSearch];i++)
				{
					files[fileCount][i]=new char[61];
					int j;
					for (j=0;files[cSearch][i][j]!='\0';j++)
					{
						//cout<<fileCount<<" "<<cSearch<<" "<<nLines[fileCount]<<" "<<nLines[cSearch]<<" "<<i<<" "<<j<<endl;
						files[fileCount][i][j]=files[cSearch][i][j];
					}
					files[fileCount][i][j]=files[cSearch][i][j];
				}
				fileCount++;
				cout<<"\nfile copied successfully\n\n";
				continue;

			}


		}
		if (selector==5)
		{
			cout<<"Please enter a valid file name: ";
			char temp[50];
			cin.getline(temp,49);
			int dSearch=0;int dCheck=0;
			while (dSearch<fileCount)
			{
				if (StrCmp(temp,fileNames[dSearch])==0)
				{
					dCheck=1;
					break;
				}
				dSearch++;
			}
			if (dCheck==0)
			{
				cout<<"file not found"<<endl;
				continue;
			}
			else if (dCheck==1)
			{
				for (int i=0;i<nLines[dSearch];i++)
				{
					delete[] files[dSearch][i];
				}
				delete[] files[dSearch];
				fileNames[dSearch]="deleted file";
				cout<<"file deleted\n";
				continue;
			}

		}
		if (selector==6)
		{
			cout<<"files currently in the memory are \n\n";
			for (int i=0;i<fileCount;i++)
				cout<<i<<". "<<fileNames[i]<<endl;
		}
		if (selector==7)
			break;

	}
	return 0;
}
