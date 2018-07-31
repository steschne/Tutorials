// pointer.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <new>
#include <string>
using namespace std;


int main()
{
	int i, n, t;
	int * p;
	cout << "How many numbers would you like to type in Steven ? " << "\n";
	cout << "Please enter the amount of number:";
	cin >> i;

	p = new (nothrow) int[i];
	if (p == nullptr)
		cout << "Error: mempory could not be allocated";
	else
	{
		for (n = 0; n < i; n++)
		{
			cout << "Enter a number:";
			cin >> p[n];
		}
		cout << "You have entered: ";
		for (n = 0; n < i; n++)
			cout << p[n] << ", ";
		
		delete[] p;
		
		
		cin >> t;
		
	}

    return 0;
}

