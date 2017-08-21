//============================================================================
// Name        : i160033_cpAssignment2.cpp
// Author      : Muhammad Abdullah Cheema
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================
#include <iostream>
using namespace std;
/*-------------question 1-------------*/
int find(int array[],int length,int target)
{
	if (length==0)return -1;
	if (array[length-1]==target)
	{
		return length-1;
	}
	return find(array,length-1,target);
}
/*-------------question 2-------------*/
float PiValue(int n)
{
	if (n==1)
	{
		return 4.0;
	}
	if (n%2==0)
	{
		return (PiValue(n-1)-(4.0/(2*n)-1));
	}
	else if(n%2!=0)
	{
		return (PiValue(n-1)+(4.0/(2*n)-1));
	}
}
/*-------------question 3-------------*/
void print(int n,char ch)
{
	if (n==0)return;
	cout<<ch;
	return print(n-1,ch);
}
void PrintPattermQ3(int start,int end)
{
	if (start==end)
	{
		return;
	}
	print(start,' ');
	cout<<"*"<<endl;
	PrintPattermQ3(start+1, end);
	print(start-1,' ');
	if (start!=1)
	cout<<"*"<<endl;
	return;
}
/*-------------question 4-------------*/
void PrintPatternQ4(int grow,int start,int decrease)
{
	if (start==grow)
		return;
	print(grow-start, ' ');
	print(start+((start-1)),'*');
	cout<<endl;
	PrintPatternQ4(grow,start+1,decrease);
	if (start<=decrease)
	{
		print(grow-start,' ');
		print(start+(start-1),'*');
		cout<<endl;

	}
}
/*-------------question 5-------------*/
void PrintPatternQ5(int grow,int start,int decrease)
{
	if (start==grow)
	{
		return;
	}
	print(grow-start, ' ');
	print(start+((start-1)),'*');
	cout<<endl;
	PrintPatternQ4(grow,start+1,decrease);
	if ((start-2)<=decrease)
	{
	print(grow-start+1,' ');
	print((start-2)+(start-1),'*');
	cout<<endl;
	}
}

/*-------------question 6-------------*/
void PrintPatternQ6(int grow,int start,int decrease)
{
	if (start==grow+1)return;
	print(grow-start,' ');
	cout<<"|";
	print(grow-start,' ');
	print((start-1)*2,'*');
	cout<<'|';
	print((start-1)*2,'*');
	print(grow-start,' ');
	cout<<"|\n";
	PrintPatternQ6(grow,start+1,decrease);
	if (start<=decrease)
	{
		if (start!=grow)
		{
			print(grow-start,' ');
			cout<<"|";
			print(grow-start,' ');
			print((start-1)*2,'*');
			cout<<'|';
			print((start-1)*2,'*');
			print(grow-start,' ');
			cout<<"|\n";
		}
	}
}
/*-------------question 7-------------*/
void PrintPatternQ7(int start,int end)
{
	if (start==end)
	{
		print(end-1,' ');
		cout<<'*'<<endl;
		return;
	}
	print(start-1,' ');
	cout<<'*';
	print(1+(2*((end-1)-start)),' ');
	cout<<"*";
	cout<<'\n';
	PrintPatternQ7(start+1,end);
	print(start-1,' ');
	cout<<'*';
	print(1+(2*((end-1)-start)),' ');
	cout<<'*';
	cout<<'\n';
}
/*-------------question 8-------------*/
void PrintPatternQ8(int start,int end)
{
	if (start==end)
	{
		print(end-start,' ');
		cout<<'*';
		print((start-1)*2,' ');
		cout<<"*"<<endl;
		return;
	}
	print(end-start,' ');
	cout<<'*';
	print((start-1)*2,' ');
	cout<<"*"<<endl;
	PrintPatternQ8(start+1,end);
	print(end-start,' ');
	cout<<'*';
	print((start-1)*2,' ');
	cout<<"*"<<endl;
}

/*-------------question 10-------------*/
int product(int x,int y)
{
	if (x==1)return y;
	return y+product(x-1,y);
}
/*-------------question 11-------------*/
void printMaze(char input[12][12], int nrows=12, int ncols=12) {
	for (int i = 0; i < nrows; i++) {//cout<<i<<endl;
		for (int j = 0; j < ncols; j++) {//cout<<j;
			cout << input[i][j] << " ";
		}
		cout << endl;
	}
	cout<<endl<<endl;
}
void mazeTraverse(char maze[12][12],int nrows,int ncols,int srows,int scols)
{
	printMaze(maze);
	if (scols<0)return;
	if ((maze[srows][scols-1]=='#'&&maze[srows+1][scols]=='#')&&maze[srows-1][scols]=='#')
	{//cout<<1<<endl;
		maze[srows][scols]='X';return;
	}
	if (maze[srows][scols-1]=='.')
	{//cout<<scols-1<<" "<<srows<<endl;
		maze[srows][scols-1]='X';
		mazeTraverse(maze,nrows,ncols,srows,scols-1);
	}
	if (maze[srows+1][scols]=='.')
	{//cout<<3<<endl;
		maze[srows+1][scols]='X';
		mazeTraverse(maze,nrows,ncols,srows+1,scols);
	}
	if (maze[srows-11][scols]=='.')
	{//cout<<4<<endl;
		maze[srows-1][scols]='X';
		mazeTraverse(maze,nrows,ncols,srows-1,scols);
	}
	if (maze[srows+1][scols]!='.'&&maze[srows-1][scols]!='.'&&maze[srows][scols-1]!='.'){
	if (maze[srows][scols+1]=='.')
	{
		maze[srows][scols+1]='X';
		mazeTraverse(maze,nrows,ncols,srows,scols+1);
	}
	}
	//mazeTraverse(maze,nrows,ncols,srows,scols-1);

}
/*-------------question 13-------------*/
long permute(int n,int r)
{
	if (r==0)
		return 1;
	return (n-r+1)*permute(n,r-1);

}
bool nQueens(char **b,int n=9,int row=0,int col=0)
{
	if (col>n-1) return true;
	if (row>n-1) return nQueens(b,n,row-n,col);
	b[row][col]='Q';
	return nQueens(b,n,row+2,col+1);
}
int main()
{
	int arr[5]={5,15,21,3,54};
	//cout<<find(arr,5,54);
	//cout<<PiValue(9999);
	//PrintPattermQ3(1, 5);
	//PrintPatternQ4(7,1,7);
	//PrintPatternQ6(5,1,5);
	//PrintPatternQ7(1,5);
	//PrintPatternQ8(1,5);
	//cout<<product(7,5);
	//cout<<permute(50,10);
	/*int n=9;
	char **b=new char*[n];
	for (int i=0;i<n;i++)
		b[i]=new char;
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			b[i][j]='-';
	nQueens(b,n);
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			cout<<b[i][j];
		}
		cout<<endl;
	}
char maze[12][12]={
			{'#','#','#','#','#','#','#','#','#','#','#','#'},
			{'#','.','.','.','#','.','.','.','.','.','.','#'},
			{'#','.','#','.','#','.','#','#','#','#','.','#'},
			{'#','#','#','.','#','.','.','.','.','#','.','#'},
			{'#','.','.','.','.','#','#','#','.','#','.','.'},
			{'#','#','#','#','.','#','.','#','.','#','.','#'},
			{'#','.','.','#','.','#','.','#','.','#','.','#'},
			{'#','#','.','#','.','#','.','#','.','#','.','#'},
			{'#','.','.','.','.','.','.','.','.','#','.','#'},
			{'#','#','#','#','#','#','.','#','#','#','.','#'},
			{'.','.','.','.','.','.','.','#','.','.','.','#'},
			{'#','#','#','#','#','#','#','#','#','#','#','#'}
	};

	mazeTraverse(maze,12,12,4,11);
*/	
	return 0;
}
