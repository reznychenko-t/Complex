#include<iostream>
using namespace std;
#pragma once

#ifndef MyComplex_h
#define MyComplex_h

class MyComplex
{
private:
	double Re, Im;
public:
	MyComplex();
	MyComplex(double, double);
	~MyComplex();
	friend ostream &operator<< (ostream&, MyComplex&);
	friend istream& operator>> (istream&, MyComplex&);
	friend  MyComplex operator+ (MyComplex&, MyComplex&);
	friend MyComplex operator+ (MyComplex&, double&);
	friend MyComplex operator+ (double&, MyComplex&);
	MyComplex operator= (const MyComplex&);
	friend MyComplex operator- (MyComplex&, MyComplex&);
	friend MyComplex operator- (MyComplex&, double&);
	friend MyComplex operator- (double&, MyComplex&);
	friend MyComplex operator* (MyComplex&, MyComplex&);
	friend MyComplex operator* (MyComplex&, double&);
	friend MyComplex operator* (double&, MyComplex&);
	double GetRe();
	double GetIm();
	int SetRe(double newVal);
	int SetIm(double newVal);


};

#endif