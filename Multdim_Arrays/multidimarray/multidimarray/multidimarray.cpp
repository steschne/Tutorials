// multidimarray.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void printarray(int arg[], int length) {
	for (int n = 0; n < length; ++n)
		cout << arg[n] << ' ';
	cout << '\n';

}

int main()
{
	int firstarray[] = { 5, 10, 15 };
	int secondarray[] = { 2, 4, 6, 8, 22 };
	printarray(firstarray, (int) sizeof firstarray/ sizeof(int));
	printarray(secondarray, (int) sizeof secondarray/ sizeof(int));
	string mystr;
	getline(cin, mystr);

}

