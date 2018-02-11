/*Earl A Platt III
  BCS 230
  Problem_1*/

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int width;
	int s = 1;
	cout << "Please Enter Width: ";
	cin >> width;
	s = width - 1;

	//Prints Top Triangle
	//Starts at the Value for 'i' updates 'i'
	for (int i = 1; i <= width; i++)
	{

		//checks that 'x' is less or equaled to 's' which will always be 1 less then 'width'
		for (int x = 1; x <= s; x++)
			cout << " ";

		//Updates 's' so that is one less then what it previouly did 
		s--;
		
		//Makes sure 'x' is only doubled through each loop
		for (int x = 1; x <= 2 * i - 1; x++)
			cout << "*";

		cout << "\n";
	}

	//Resets 's' back to 1
	s = 1;

	//Prints Bottem Triangle 
	//Makes sure that 'i' stays one less then 'width'
	for (int i = 1; i <= width - 1; i++)
	{

		//Makes sure 'x' stays less then or equaled to one less then 'width'
		for (int x = 1; x <= s; x++)
			cout << " ";

		//Updates 's' to follow the pattern
		s++;

		//Makes sure 'x' stays less then or equaled to double 'width' minus 2
		for (int x = 1; x <= 2 * (width - i) - 1; x++)
			cout << "*";

		cout << "\n";
	}
	
	return 0;
}