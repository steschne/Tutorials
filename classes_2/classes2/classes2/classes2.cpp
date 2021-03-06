// classes2.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//overloading operatirs example


#include <string>
#include "stdafx.h"
#include <iostream>
using namespace std;



class CVector {
	public:
		int x, y;
		CVector () {}; //constructor
		CVector (int a, int b) : x(a), y(b) {} //function name CVector (constructor)
		CVector operator + (const CVector&);   //function that returns a CVector
};

CVector CVector::operator + (const CVector& param) {
	CVector temp;
	temp.x = x + param.x;
	temp.y = y + param.y;
	return temp;
}

int main()
{
	int i;

	CVector foo(3, 1);
	CVector bar(1, 2);
	CVector result;

	result = foo + bar;
	cout << "(" <<result.x << "," << result.y << ")\n";

	cin >> i;
    return 0;
}

