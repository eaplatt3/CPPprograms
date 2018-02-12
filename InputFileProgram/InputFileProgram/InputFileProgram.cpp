/*Earl A Platt III
BCS 230
Lab 2 -- Task 3*/

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

	ifstream inputFile;
	string name;

	cout << "Reading Data In" << endl;
	cout << "\n";

	//Open the file for reading 
	inputFile.open("output.txt");

	//Testing to see if file Exists
	if (inputFile)
	{
		cout << "If Exist--output.txt" << endl;
		cout << "\n";

		//Looping Data In From File 
		while (inputFile >> name)
		{
			cout << name << endl;
		}

		//Close the File 
		inputFile.close();
	}

	//If File is Not Found...
	else
		cout << "File Dose not Exist" << endl;

	cout << "\n";
	cout << "Done" << endl;
	cout << "\n";

	return 0;
}
