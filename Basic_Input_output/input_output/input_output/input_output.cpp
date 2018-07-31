// input_output.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	//integer
	 
	int i;
	cout << "Please enter an integer value: ";
	cin >> i;
	cout << "The value you entered is " << i;
	cout << " and its double is " << i * 2 << ".\n";
	
	//strings
	string neustring;
	getline(cin, neustring);

	string mystr;
	cout << "What's your name ? ";

	getline(cin, mystr);
	
	cout << "Hello " << mystr << ".\n";
	cout << "What is your favorite team ? ";
	getline(cin, mystr);
	cout << "I like " << mystr << " too!\n";
	

	//stringstreams

	mystr.clear();

	float price = 0;
	int quantity = 0;

	cout << "Enter price: ";
	getline(cin, mystr);
	stringstream(mystr) >> price;
	cout << "Enter quantity: ";
	getline(cin, mystr);
	stringstream(mystr) >> quantity;
	cout << "Total price:" << price * quantity << endl;
	
	return 0;
}

