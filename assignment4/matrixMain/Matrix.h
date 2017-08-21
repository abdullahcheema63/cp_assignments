/*
 * Matrix.h
 *
 *  Created on: Mar 21, 2017
 *      Author: abdullah
 */
#include <iostream>
#include <cassert>
using namespace std;
#ifndef MATRIX_H_
#define MATRIX_H_

class Matrix {
	int **matrix;
	int m;
	int n;
public:
	Matrix();//default constructor
	Matrix(const int &a,const int &b);//parametrized constructor
	Matrix& operator=(const Matrix &mat);
	Matrix(const Matrix &b);//copy constructor
	void set(int i,int j,int val);//set value val at i and j
	int& get(int i,int j);//get the value of i j
	Matrix & assign(const Matrix &mat);//assigns (copies) the matrix and returns the same
	Matrix add(const Matrix &mat);//adds the matrix and returns the result
	Matrix subtract(const Matrix &mat);//subtracts the matrix and returns thee result
	Matrix multiply(const Matrix &mat);//multiplies two matrices and returns the result
	Matrix multiplyELement(const Matrix &mat);//elementwise multiplies two matrices and returns the result
	Matrix add(float a);//adds float a to every element
	Matrix multiply(float a);//multiplies float a to every element
	void input();//takes input in every element of matrix
	void display();//prints every element
	int &operator()(int &i,int &j);
	int &operator()(int &i,int &j)const;
	bool operator==(const Matrix &mat);
	Matrix operator+(const Matrix &mat);
	Matrix operator-(const Matrix &mat);
	Matrix operator*(const Matrix &mat);
	Matrix& operator++();
	void operator+=(const Matrix &mat);
	void operator-=(const Matrix &mat);
	int getM()const;
	int getN()const;
	~Matrix();
};
ostream& operator<<(ostream& out,const Matrix& mat);
istream& operator>>(istream& in,const Matrix &mat);
#endif /* MATRIX_H_ */
