#include <iostream>
using namespace std;

void showit(int = 10); //Default Argument 

int main()
{
	int z;

	for (int i = 0; i < 5; i++)
	{
		showit();
	}
}

void showit(int z)
{
	cout << "the value of z in the function is " << z << endl;
}