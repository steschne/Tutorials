// cond_op.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//conditional operator "?" 
	int a, b, c;

	a = 2;
	b = 7;

	c = (a > b) ? a : b;

	cout << c << '\n';



    return 0;
}

