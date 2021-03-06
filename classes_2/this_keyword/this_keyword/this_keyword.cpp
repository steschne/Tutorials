// this_keyword.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
// this represents a pointer to the object whose member funciton is being executed. It is used within a class s member function to refer to the object itself

//example

#include "stdafx.h"
#include <iostream>
using namespace std;

class Dummy {
public:
	bool isitme(Dummy& param); // Dummy& ist die Adresse des Objekts
};

bool Dummy::isitme(Dummy& param)
{
	if (&param == this) return true; //wenn die Adresse des Parameters a == gleich der Adresse der Methode ist ---> wahr 
	else return false;
}

int main() {
	Dummy a; //Erzeuge ein Objekt a der Klasse Dummy
	Dummy* b = &a; //Erzeuge einen Pointer b der Klasse Dummy welcher auf die Adresse des Objektes a zeigt 
	if (b->isitme(a)) // Wenn der Pointer b auf die Adresse von a zeigt
		cout << "yes, &a is b\n";
	int i;
	cin >> i;
	return 0;
}
