/*Earl A Platt III
  BCS 230
  Lab 3 -- Assigment*/

#include <iostream>
#include <iomanip>

//Function Headers
#include "Flavor.h"
#include "ConeCount.h"
#include "ConeCost.h"
#include "Print.h"

using namespace std;



int main()
{
	double costS = 2.75;
	double costM = 3.25;
	double costL = 3.75;
	double Scost = 0.0;
	double Mcost = 0.0;
	double Lcost = 0.0;
	int choice = 0;
	int choice2 = 0;
	int totS = 0;
	int totV = 0;
	int totC = 0;
	int totM = 0;
	int totL = 0;
	

	do
	{
		//The First Menu
		cout << setw(36) << "Welcome to the Ice Cream Shoppe" << endl;
		cout << " ---------------------------------------" << endl;
		cout << " Please Select Your Icecream flavor Choice:" << endl;
		cout << setw(15) << "1) Vanilla" << endl;
		cout << setw(17) << "2) Chocolate" << endl;
		cout << setw(12) << "3) Exit" << endl;
		cin >> choice;

		//Checks That The Input is a Numuric Char
		while (cin.fail())
		{
			cout << "Invalid Input Please Re-enter Your Choice" << endl;
			cin.clear();
			cin.ignore(256, '\n');
			cin >> choice;
		}

		if (choice == 1)
		{
			//Function Call
			//If '1' is Picked Takes the Data Into the Function and Then Returns it 
			totV = Flavor(totV);

			//Printing of the Tally
			Print(totV, totC, totS, Scost, totM, Mcost, totL, Lcost);

			system("pause");
			system("cls");

			do
			{
				//Second Menu Vanilla
				cout << "     Please Pick a Cone Size" << endl;
				cout << " -------------------------------" << endl;
				cout << setw(15) << "1) Small 9oz" << endl;
				cout << setw(17) << "2) Medium 12oz" << endl;
				cout << setw(16) << "3) Large 15oz" << endl;

				cin >> choice2;

				//Checks to Make Sure Input is a Numeric Char
				while (cin.fail())
				{
					cout << "Invalid Input Please Re-enter Your Choice" << endl;
					cin.clear();
					cin.ignore(256, '\n');
					cin >> choice2;
				}

				if (choice2 == 1)
				{
					//Function Call
					//Sends Data to ConeCount Function and Returns the Data
					totS = ConeCount(totS);
					Scost = ConeCost(totS, costS);

					//Printing of the Tally
					Print(totV, totC, totS, Scost, totM, Mcost, totL, Lcost);

					system("pause");
					system("cls");
				}

				if (choice2 == 2)
				{
					//Function Call
					//Sends Data to ConeCount Function and Returns the Data
					totM = ConeCount(totM);
					Mcost = ConeCost(totM, costM);

					//Printing of the Tally
					Print(totV, totC, totS, Scost, totM, Mcost, totL, Lcost);

					system("pause");
					system("cls");
				}

				if (choice2 == 3)
				{
					//Function Call
					//Sends Data to ConeCount Function and Returns the Data
					totL = ConeCount(totL);
					Lcost = ConeCost(totL, costL);

					//Printing of the Tally
					Print(totV, totC, totS, Scost, totM, Mcost, totL, Lcost);

					system("pause");
					system("cls");
				}

				else if (choice2 > 3)
				{
					//Checks That Users Input is > 3
					cout << "Invalid Entry" << endl;
					system("pause");
					system("cls");
				}

			} while (choice > 3);

		}

		if (choice == 2)
		{
			//Function Call
			//Sends Data to Flavor Function and Returns the Data
			totC = Flavor(totC);

			//Printing of the Tally
			Print(totV, totC, totS, Scost, totM, Mcost, totL, Lcost);

			system("pause");
			system("cls");

			do
			{
				//Second Menu Chocolate
				cout << "     Please Pick a Cone Size" << endl;
				cout << " -------------------------------" << endl;
				cout << setw(15) << "1) Small 9oz" << endl;
				cout << setw(17) << "2) Medium 12oz" << endl;
				cout << setw(16) << "3) Large 15oz" << endl;

				cin >> choice2;

				//Checks to Make Sure Input is a Numeric Char
				while (cin.fail())
				{
					cout << "Invalid Input Please Re-enter Your Choice" << endl;
					cin.clear();
					cin.ignore(256, '\n');
					cin >> choice2;
				}

				if (choice2 == 1)
				{
					//Function Call
					//Sends Data to ConeCount Function and Returns the Data
					totS = ConeCount(totS);
					Scost = ConeCost(totS, costS);

					//Printing of the Tally
					Print(totV, totC, totS, Scost, totM, Mcost, totL, Lcost);

					system("pause");
					system("cls");
				}

				if (choice2 == 2)
				{
					//Function Call
					//Sends Data to ConeCount Function and Returns the Data
					totM = ConeCount(totM);
					Mcost = ConeCost(totM, costM);

					//Printing of the Tally
					Print(totV, totC, totS, Scost, totM, Mcost, totL, Lcost);

					system("pause");
					system("cls");
				}

				if (choice2 == 3)
				{
					//Function Call
					//Sends Data to ConeCount Function and Returns the Data
					totL = ConeCount(totL);
					Lcost = ConeCost(totL, costL);

					//Printing of the Tally
					Print(totV, totC, totS, Scost, totM, Mcost, totL, Lcost);

					system("pause");
					system("cls");
				}

				else if (choice2 > 3)
				{
					//Checks That Users Input is > 3
					cout << "Invalid Entry" << endl;
					system("pause");
					system("cls");
				}

			} while (choice > 3);
		}

	} while (choice != 3);

		return 0;
}