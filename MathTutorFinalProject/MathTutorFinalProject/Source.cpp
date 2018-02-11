//Earl Platt III
//Final Project - Math Tutor
//4/20/2017
//BCS 120

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include "Addition.h"
#include "Subtraction.h"
#include "Multiplication.h"
#include "Division.h"

using namespace std;
int main()
{
	int choice = 0;
	int x = 0;
	int y = 0;
	int z = 0;
	int ans = 0;;
	int t = 0;

	do
	{
		srand(time(0));
		x = rand() % 20 + 1;
		y = rand() % 20 + 1;

		cout << " Please Select What Type of Math You'd Like to Pratice" << endl;
		cout << " -----------------------------------------------------" << endl;
		cout << " 1) " << "To pratice Addition" << endl;
		cout << " 2) " << "To Pratice Subtraction" << endl;
		cout << " 3) " << "To Pratice Multiplication" << endl;
		cout << " 4) " << "To Pratice Division" << endl;
		cout << " 5) " << "To Quit" << endl;
		cout << " Enter Your Choice ";
		cin >> choice;
		while (cin.fail())
		{
			cout << "Invalid Input Please Re-enter Your Choice" << endl;
			cin.clear();
			cin.ignore(256, '\n');
			cin >> choice;
		}

		if (choice <= 5)
		{

			if (choice == 1)
			{
				addition(x, y, x, ans);
				system("pause");
				system("cls");
			}

			else if (choice == 2)
			{
				subtraction(x, y, x, ans);
				system("pause");
				system("cls");
			}

			else if (choice == 3)
			{
				multiplication(x, y, z, ans);
				system("pause");
				system("cls");
			}
			else if (choice == 4)
			{
				division(x, y, z, ans, t);
				system("pause");
				system("cls");
			}

			else if (choice == 5)
			{
				exit(0);
			}
		}
		else
		{
			cout << "Invalid Input" << endl;
			system("pause");
			system("cls");
		}


	} while (choice != 5);

	
	return 0;
}