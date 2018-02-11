#include <iostream>
#include <string>

using namespace std;

int main()
{
	int base = 0;


	cout << "Please Enter the Base of the Triangle? ";
	cin >> base;

	while(base <=50 && base >= 1)
	{
		for (int i = 1; i <= base; ++i)
		{
			for (int x = 1; x <= i; ++x)
			{
				cout << "* ";
			}
			cout << "\n";
		}
	}

		cout << "Invalid Input Please Re-Enter a Number" << endl;
		cin >> base;









	return 0;
}