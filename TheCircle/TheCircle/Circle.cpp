#include <iostream>
#include <iomanip>
using namespace std;
#include "Circle.h"

void circle::print()
{
	cout << fixed << setprecision(2) << "   The Diameter of the Circle is: " << radius * 2 << endl;
	cout << "    The Color of the Circle is: " << color << endl;	
}

void circle::circumference()
{
	cout << "      The Circumference of the Circle is: " << 2 * PI * radius << endl;

}

void circle::area()
{
	cout << "     The Area of the Circle is: " << PI * radius * radius << endl;
}
