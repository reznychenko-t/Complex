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
	//MyComplex();
//	MyComplex(double a = 0, double b = 0);
	MyComplex(double InitRe = 0, double InitIm = 0)
	{
		Re = InitRe;
		Im = InitIm;
	};
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