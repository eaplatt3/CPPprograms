/*Earl A Platt III
  10/09/2017
  Extra Credit*/

#include <iostream>
#include "IntRoman.h"

using namespace std;

int main()
{
	double num;
	int intnum, m, d, c, l, x, v, i, n;
	IntRoman setInt(double num);
	intnum = (int)num;

	IntRoman setRomanMath(double num, int intnum, int m, int d, int c, int l, int x, int v, int i, int n);

	IntRoman print(int m, int d, int c, int l, int x, int v, int i, int n);

	cout << "\n";

	system("pause");
	return 0;
}