//Earl Platt III
//Final Project - Guessing Game
//5/10/2017

#include <iostream>
#include <iomanip>
#include "randnum.h"       //Function Includes
#include "randlett.h"

using namespace std;

int main()
{
	//Variables
	int num;
	int choice;
	char lett;
	int rnum;
	int ctr = 3;
	char rlett;

	do
	{
		//Random Number & Letter Gen
		srand(time(0));
		rnum = rand() % 50 + 1;
		rlett = 'A' + rand() % 26;

		//Menu
		cout << "The World Famous Guess it" << endl;
		cout << "-------------------------" << endl;
		cout << "Please Pick From The following" << endl;
		cout << " 1 - Guess a Number" << endl;
		cout << " 2 - Guess a Letter" << endl;
		cout << " 3 - Quit Playing" << endl;
		cout << "Drum Roll Please....." << endl;
		cin >> choice;
		//Validating User Input
		while (cin.fail())
		{
			cout << "Invalid Input Please Re-enter Your Choice ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> choice;
		}
		//Random Number Choice
		if (choice == 1)
		{
			cout << "Hint its Between 1 & 50" << endl;
			cout << "Your Number: ";
			cin >> num;
			randnum(rnum, num, ctr);
			system("pause");
			system("cls");

		}

		//Letter Choice
		else if (choice == 2)
		{
			cout << "Hint Its CAPITAL Letters" << endl;
			cout << "Your Letter: ";
			cin >> lett;
			lett = toupper(lett);
			randlett(rlett, lett, ctr);
			system("pause");
			system("cls");
		}
		//Terimate App
		else if (choice == 3)
		{
			exit(0);
		}

		//Validating User Input
		else
		{
			cout << "Invalid Input" << endl;
			system("pause");
			system("cls");
		}

		//Loop Control
	} while (choice != 3);

	return 0;

}



