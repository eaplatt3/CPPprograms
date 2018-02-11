#include <iostream>
#include <string>
#include "Circle.h"

using namespace std;

int main()
{
	double r;
	string c;

	circle a, z;
	circle w (3.14, 34, "RED");

	cout << " THE CIRCLE CLASS" << endl;
	cout << " ----------------" << endl; 

	cout << "  Please Enter the Radius of the Circle: ";
	cin >> r;
	a.setradius(r);

	cout << "  Please Enter the Color of the Circle: ";
	cin >> c;
	a.setcolor(c);
	cout << " " << endl;

	a.print();
	a.area();
	a.circumference();
	
	cout << " " << endl;
	cout << "  Printing The Constructors Data" << endl;
	cout << "  ------------------------------" << endl;
	w.print();
	cout << " " << endl;
	z.print();
	z.area();
	z.circumference();


	return 0;
}