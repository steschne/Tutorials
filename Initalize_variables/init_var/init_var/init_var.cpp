// init_var.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const double pi = 3.1415926;
const char tab = '\t';
const char newline = '\n';

int main()
{
	double r = 5.0;
	double circle;

	circle = 2 * pi * r ;  
	cout << circle;
	cout << newline;

    return 0;
}

