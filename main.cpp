#include "pch.h"
#include "MyComplex.h"
#include <iostream>

int main()
{
	MyComplex A(2, 1), B(2, 3), C, D;
	double d = 12.5;
	C = A + B;
	cout << "C= A + B: " << C << endl;
	C = A + d;
	cout << "C = A + "<< d << ": " << C << endl;
	D = d + C;
	cout << "D = " << d << " + C: " << D << endl;
	C = A = B = C;
	cout << "C = A = B = C: " << C << endl;
	/*
		cout<<A;
		cin>>B;
		cout<<B;
	*/
	return 1;
}