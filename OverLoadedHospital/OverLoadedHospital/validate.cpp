#include <iostream>
using namespace std;

void validate(double& x)
{
	while (x < 0)
	{
		cout << "Invalid Data" << endl;
		cin >> x;
	}

}