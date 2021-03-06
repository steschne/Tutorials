// structure_type.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
#include "stdafx.h"
// array of structures
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct person_t {
  string name;
  int age;
} persons [3];

void printpersons (person_t person);

int main ()
{
  string mystr;
  int n;

  for (n=0; n<3; n++)
  {
    cout << "Enter Name: ";
    getline (cin,persons[n].name);
    cout << "Enter Age: ";
    getline (cin,mystr);
    stringstream(mystr) >> persons[n].age;
  }

  cout << "\nYou have entered these movies:\n";
  for (n=0; n<3; n++)
    printpersons (persons[n]);
  return 0;
}

void printpersons (person_t person)
{
  cout << person.name;
  cout << " (" << person.age << ")\n";
}