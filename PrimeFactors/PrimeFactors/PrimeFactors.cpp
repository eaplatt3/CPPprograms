// PrimeFactors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>\

using namespace std;


int main()
{
	int num = 13195;
	int temp = 1;

	while (temp <= num)
	{
		if (!(num % temp))
			cout << " " << temp;

		temp++;
	}

	cout << endl;

	return 0;
}