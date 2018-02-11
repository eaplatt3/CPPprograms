// IceCreamShops.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std; 


int main()
{
	string flavor = "Vanilla";
	string flavor2 = "Chocolate";
	string size1 = "Small 9oz";
	string size2 = "Medium 12oz";
	string size3 = "Large 15oz";
	double costS = 2.75;
	double costM = 3.25;
	double costL = 3.75;
	int choice = 0;
	int choice2 = 0;
	double tot = 0.0;

	while (choice != 3)
	{
		cout << "Welcome to the Ice Cream Shoppe" << endl;
		cout << "-------------------------------" << endl;
		cout << "Please Select Your Ice Cream flavor Choice:" << endl;
		cout << "1) Vanilla" << endl;
		cout << "2) Chocolate" << endl;
		cout << "3) Exit" << endl;

		if (choice == 1)
			while (choice2 != 4)
			{
				cout << "What Size Cone Would you Like: " << endl;
				cout << "-------------------------------" << endl;
				cout << "1) Small" << " " << costS << endl;
				cout << "2) Medium" << " " << costM << endl;
				cout << "3) Large" << " " << costL << endl;

				if (choice2 == 1)
				{
					while (choice2 == 1)
					{
						tot = costS;
						tot++;
					}
				}

				if (choice2 == 2)
				{
					tot = costS;
				}


			}
	}

    return 0;
}

