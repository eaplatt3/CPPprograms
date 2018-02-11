#include <iostream>
using namespace std;
#include "Square.h"

void Square::print()// :: - scope resulation oprater = print belongs to Square program
{
	cout << "The leanth of sideA is " << sideA << endl;

	cout << "The leanth of sideB is " << sideB << endl;
}

void Square::area()
{
	cout << "The Area of the square is " << sideA * sideB << endl;
}

void Square::perimeter()
{
	cout << "The Perimeter of the square is " << sideA * 2 + sideB * 2 << endl;
}