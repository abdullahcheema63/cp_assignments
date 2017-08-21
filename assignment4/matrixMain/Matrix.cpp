/*
 * Matrix.cpp
 *
 *  Created on: Mar 21, 2017
 *      Author: abdullah
 */

#include "Matrix.h"

Matrix::Matrix() {
	// TODO Auto-generated constructor stub
	matrix=NULL;
	m=0;
	n=0;
}
Matrix::Matrix(const int &a,const int &b) {
	// TODO Auto-generated constructor stub
	m=a;n=b;
	matrix=new int*[a];
	for (int i=0;i<a;i++)
		matrix[i]=new int[b];
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			matrix[i][j]=0;
}
Matrix& Matrix::operator =(const Matrix &mat)
{
	m=mat.m;
	n=mat.n;
	cout<<m<< " "<<n;
	matrix=new int*[m];
	for (int i=0;i<mat.m;i++)
	{
		cout<<"i "<<i<<endl;
		matrix[i]=new int[mat.n];
	}
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
			matrix[i][j]=mat.matrix[i][j];
	}
	return *this;
}
void Matrix::set(int i,int j,int val)
{
	assert(i<m&&j<n);
	matrix[i][j]=val;
}
int& Matrix::get(int i,int j)
{
	assert(i<m&&j<n);
	return matrix[i][j];
}
Matrix&Matrix::assign(const Matrix &mat)
{
	assert(m==mat.m&&n==mat.n);
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			matrix[i][j]=mat.matrix[i][j];
		}
	}
	m=mat.m;
	n=mat.n;
}
Matrix Matrix::add(const Matrix &mat)
{
	assert(m==mat.m&&n==mat.n);
	Matrix ret(m,n);
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			ret.matrix[i][j]=matrix[i][j]+mat.matrix[i][i];
		}
	}
	return ret;
}

Matrix Matrix::subtract(const Matrix &mat)
{
	assert(m==mat.m&&n==mat.n);
	Matrix ret(m,n);
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			ret.matrix[i][j]=matrix[i][j]-mat.matrix[i][i];
		}
	}
	return ret;
}
Matrix Matrix::multiply(const Matrix &mat)
{
	assert(n==mat.m);
	Matrix c(m,mat.n);
	for (int i=0;i<m;i++)
	{
		for (int k=0;k<mat.n;k++)
		{
			for (int j=0;j<n;j++)
			{
				c.matrix[i][k]+=this->matrix[i][j]*mat.matrix[j][k];
			}
		}
	}
	return c;
}
Matrix Matrix::multiplyELement(const Matrix &mat)
{
	assert(m==mat.m&&n==mat.n);
	Matrix ret(m,n);
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			ret.matrix[i][j]=matrix[i][j]*mat.matrix[i][j];
		}
	}
	return ret;
}
Matrix Matrix::add(float a)
{
	Matrix ret(m,n);
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			ret.matrix[i][j]=matrix[i][j]+a;
		}
	}
	return ret;
}
Matrix Matrix::multiply(float a)
{
	Matrix ret(m,n);
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			ret.matrix[i][j]=matrix[i][j]*a;
		}
	}
	return ret;
}
void Matrix::input()
{
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			cout<<"please enter value for "<<i<<" and "<<j<<" index: ";
			cin>>matrix[i][j];
		}
	}
}
void Matrix::display()
{
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
			cout<<matrix[i][j]<<" ";
		cout<<endl;
	}
}
Matrix::Matrix(const Matrix &b)
{
	*this=b;
}
int &Matrix::operator()(int &i,int &j)
{
	return this->get(i,j);
}
int &Matrix::operator()(int &i,int &j)const
{
	return this->matrix[i][j];
}
bool Matrix::operator==(const Matrix& mat)
{
	if (m!=mat.m||n!=mat.n)return false;
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (matrix[i][j]!=mat.matrix[i][j])return false;
		}
	}
	return true;
}
Matrix Matrix::operator+(const Matrix &mat)
{
	Matrix c=this->add(mat);
	return c;
}
Matrix Matrix::operator -(const Matrix&mat)
{
	Matrix c=this->subtract(mat);
	return c;
}
Matrix Matrix::operator*(const Matrix &mat)
{
	Matrix c=this->multiply(mat);
	return c;
}
Matrix& Matrix::operator++()
{
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			this->matrix[i][j]++;
		}
	}
	return *this;
}
void Matrix::operator +=(const Matrix &mat)
{
	(*this)=this->add(mat);
}
void Matrix::operator -=(const Matrix &mat)
{
	(*this)=this->add(mat);
}
int Matrix::getM()const
{
	return m;
}
int Matrix::getN()const
{
	return n;
}
Matrix::~Matrix() {
	// TODO Auto-generated destructor stub
	if (!matrix)delete[] matrix;
}

ostream& operator<<(ostream& out,const Matrix &mat)
{
	for (int i=0;i<mat.getM();i++)
	{
		for (int j=0;j<mat.getN();j++)
		{
			out<<mat(i,j)<<" ";
		}
		out<<endl;
	}
	return out;
}
istream& operator>>(istream& inp,const Matrix &mat)
{
	for (int i=0;i<mat.getM();i++)
	{
		for (int j=0;j<mat.getN();j++)
		{
			cout<<"please enter value for "<<i<<" and "<<j<<" index: ";
			inp>>mat(i,j);
		}
	}
	return inp;
}
