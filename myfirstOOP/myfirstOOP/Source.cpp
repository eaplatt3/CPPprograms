#include <iostream>
using namespace std;
#include "Square.h"
#include "printit2.h"

int main()
{
	int side1,side2;

	Square s, l;
	Square z(44, 66);

	cout << "Please Enter The lent of the sideA" << endl;
	cin >> side1; 
	s.setSideA(side1);

	cout << "Please Enter The lent of the sideB" << endl;
	cin >> side2;
	s.setSideB(side2);

	/*cout << "The length of the squre s is " << s.getSideA() << endl;
	l.setSide(33);
	m.setSide(15);

	cout << "The length of the squre l is " << l.getSide() << endl;
	cout << "The length of the squre m is " << m.getSide() << endl;*/

	s.print();
	s.area();
	s.perimeter();
	cout << "Print Values From the Construtor" << endl;
	l.print();
	z.print();
	printit(z);
	return 0;
}


