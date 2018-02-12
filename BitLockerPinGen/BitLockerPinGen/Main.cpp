/*BitLocker Pin Generator
  November 3, 2017
  © Earl Platt III*/

#include <iostream>
#include <istream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <Windows.h>
#include "RandomPin.h"

using namespace std;

int main()
{
	const int SIZE = 6;
	char c = 32;

	RandomPin pin[SIZE];

	cout << "BitLocker Pin Generator Beta" << endl;
	cout << "----------------------------" << endl; 

	cout << "Please Press The Space Bar" << endl;
	cin.get(c);

	cout << "Your BitLocker Pin Is" << endl;

	for (int i = 0; i < SIZE; i++)
		{
			cout << setw(2) << pin[i].getPin();
		}

	cout << endl;
	system("pause");

	return 0; 
}
