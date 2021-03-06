// classes1.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//classes example: Eine Klasse des Rechtecks


#include "stdafx.h"
#include <iostream>
using namespace std;

class Rectangle {
private:
	int width, height;
public:
	void set_values(int, int);
	int area() { return width * height; }
};

void Rectangle::set_values(int x, int y) {
	width = x;
	height = y;
}


class Circle {
	double radius;
public:
	Circle(double r) { radius = r; }
	double circum() { return 2 * radius*3.14159265; }
};

int main()
{
	int i;
	Rectangle rect;
	rect.set_values(3, 4);
	cout << "area: " << rect.area() << '\n';

	Circle foo (10.0); //functional form
	Circle bar = 20.0; // assignment init
	Circle baz { 30.0 }; // uniform init
	Circle qux = { 30.0 }; //POD like

	cout << "foo's circumference: " << bar.circum() << '\n';

	cin >> i;
	return 0;
}


