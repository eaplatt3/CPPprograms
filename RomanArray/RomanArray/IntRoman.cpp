#include "IntRoman.h"
#include <iostream>

using namespace std;

void IntRoman::setInt(double num) {
	num = num;
	cout << "Enter a number:";
	cin >> num;
}

void IntRoman::setRomanMath(double num, int intnum, int m, int d, int c, int l, int x, int v, int i, int n) {
	num = num;
	
	m = intnum / 1000;
	d = ((intnum % 1000) / 500);
	c = ((intnum % 500) / 100);
	l = ((intnum % 100) / 50);
	x = ((intnum % 50) / 10);
	v = ((intnum % 10) / 5);
	i = (intnum % 5);
	n = m + d + c + l + x + v + i;
}

void IntRoman::print(int m, int d, int c, int l, int x, int v, int i, int n) {
	while (n > 0)
	{

		{
			for (m; m > 0; m--)
				cout << "M";
		}
		{
			for (d; d > 0; d--)
				cout << "D";
		}
		{
			for (c; c > 0; c--)
				cout << "C";
		}
		{
			for (l; l > 0; l--)
				cout << "L";
		}
		{
			for (x; x > 0; x--)
				cout << "X";
		}
		{
			for (v; v > 0; v--)
				cout << "V";
		}
		{
			for (i; i > 0; i--)
				cout << "I";
		}
		n--;


	}
}