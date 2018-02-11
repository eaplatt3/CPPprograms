#include <iostream>
#include "doubleit.h"

using namespace std;


int main()
{
	int n;

	cout << "enter and number and ill double it " << endl;
	cin >> n;

	cout << "this is n before calling the function " << n << endl;

	doubleit(n);
	
	cout << "this is n after the function " << n << endl;

	
	return 0;
}



