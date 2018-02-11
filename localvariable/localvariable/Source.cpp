#include <iostream>
using namespace std;

void showit(int);

int main()
{
	int z = 3;
	cout << "the Value of z in main is " << z << endl;
	showit(z);
}

void showit(int z)
{
	z = 4;
	cout << "the value of z in the function is " << z << endl;
}