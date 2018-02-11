#include <iostream>
using namespace std;

void showit(int);

int main()
{
	int z = 3;
	cout << "the Value of z in main is " << z << endl;
	for (int i = 0; i < 5; i++)
	{
		showit(z);
	}
}

void showit(int z)
{
	static int ctr; //Static Variable
	ctr++;
	z = 4;
	cout << "the value of z in the function is " << z << " The Function was Called " << ctr << " times" << endl;
}