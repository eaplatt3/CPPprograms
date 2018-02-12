
/*Earl A Platt III
BCS 230
Lab 2 -- Task 1*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int width;

	//Asks the User input the data 
	cout << "Please Enter the Width of The Shape: ";
	cin >> width;


	//Tests The Users Input To Verify That the Number entered is between 1 & 20
	if (width < 1 || width > 50)
	{
		cout << "Invalid Input Please Enter the Width of The Shape: ";
		cin >> width;

		//Loops The Questions till valid input it entered 
		while (width < 1 || width > 50)
		{
			cout << "Invalid Input Please Enter the Width of The Shape: ";
			cin >> width;
		}

	}

	//Takes the value in 'i' as long as its less or equaled to the value in 'width' then updates 'i' by '1'
	for (int i = 1; i <= width; i++)
	{

		//This takes the value in 'i' for every update and prints a '*' to match the update 
		for (int x = 1; x <= i; x++)
		{
			cout << "* ";
		}

		cout << "\n";
	}

	return 0;
}