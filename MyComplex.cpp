#include <iostream>
#include "pch.h"
#include "MyComplex.h"
using namespace std;

	MyComplex::MyComplex()
	{
		Re = 0;
		Im = 0;
	}

	MyComplex::MyComplex(double InitRe, double InitIm)
	{
		Re = InitRe;
		Im = InitIm;
	}

	MyComplex::~MyComplex()
	{
		//  cout << " In dectructor" << endl;
	}

	istream& operator>> (istream& o, MyComplex& b)
	{
		double a, c;
		o >> a >> c;
		b.SetRe(a);
		b.SetIm(c);
		return o;
	}

	ostream &operator<< (ostream& o, MyComplex& b)
	{
		o << "Re= " << b.Re << " Im= " << b.Im;
		return o;
	}

	 MyComplex operator+ (MyComplex& a, MyComplex& b)
	{
		MyComplex c;
		c.Re = a.Re + b.Re;
		c.Im = a.Im + b.Im;
		return c;
	}
	 
	 MyComplex operator+ (MyComplex& a, double& b)
	{
		MyComplex c;
		c.Re = a.Re + b;
		c.Im = a.Im;
		return c;
	}
	 
	 MyComplex operator+ (double& a, MyComplex& b)
	{
		return (b + a);
	}

	MyComplex MyComplex::operator=(const MyComplex& b)
	{
		Re = b.Re;
		Im = b.Im;
		return *this;
	}

	MyComplex operator- (MyComplex& a, MyComplex& b)
	{
		MyComplex c;
		c.Re = a.Re - b.Re;
		c.Im = a.Im - b.Im;
		return c;
	}

	MyComplex operator- (MyComplex& a, double& b)
	{
		MyComplex c;
		c.Re = a.Re - b;
		c.Im = a.Im;
		return c;
	}

	MyComplex operator- (double& b, MyComplex& a)
	{
		MyComplex c;
		c.Re = b - a.Re;
		c.Im = a.Im;
		return c;
	}

	MyComplex operator* (MyComplex& a, MyComplex& b)
	{
		MyComplex c;
		c.Re = a.Re * b.Re - a.Im * b.Im;
		c.Im = a.Re * b.Im + b.Re * a.Im;
		return c;
	}

	MyComplex operator* (MyComplex& a, double& b)
	{
		MyComplex c;
		c.Re = a.Re * b;
		c.Im = a.Im * b;
		return c;
	}

	MyComplex operator* (double& b, MyComplex& a)
	{
		return (a*b);
	}

	double MyComplex::GetRe()
	{
		return Re;
	}

	double MyComplex::GetIm()
	{
		return Im;
	}

	int MyComplex::SetRe(double newVal)
	{
		Re = newVal;
		return 1;
	}

	int MyComplex::SetIm(double newVal)
	{
		Im = newVal;
		return 1;
	}

