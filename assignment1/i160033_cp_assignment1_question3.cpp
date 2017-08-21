//============================================================================
// Name        : i160033_cpLab1.cpp
// Author      : Muhammad Abdullah Cheema
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	const int n=3;
	if (n%2==0)
	{
		cout<<"algorithm won\'t work for even numbers program exitting"<<endl;
		return 0;
	}
	int array[n][n];
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			array[i][j]=-1;
	int x=0,y=n/2;
	for (int i=1;i<=n*n;i++)
	{
		array[x][y]=i;
		if (x-1<0)
		{
			if (y+1>=n)
				x++;
			else if(y+1<n)
			{
				y++;
				x=n-1;
			}
		}
		else if (y+1>=n)
		{
			if (x-1<0)
				x++;
			else if (x-1>=0)
			{
				x--;
				y=0;
			}
		}
		else if (array[x-1][y+1]!=-1)
			x++;
		else
		{
			x--;
			y++;
		}
	}
	for (int j=0;j<n;j++)
	{
		for (int k=0;k<n;k++)
			cout<<array[j][k]<<" ";
		cout<<endl;
	}

	return 0;
}

