/*Earl A Platt III
  BCS 230
  Lab 2 -- Task 3*/

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{

	ofstream outputFile;

	//Open the file for writing
	outputFile.open("output.txt");

	cout << "Writing Data" << endl;

	//Data to be wrote to the file 
	outputFile << "Earl A Platt III" << ' ' << "Computer Science" << ' ' << "Farmingdale State College";
	outputFile << ' ' << "9/12/2017" << ' ' << "91204";

	//Close the File 
	outputFile.close();

	cout << "done" << endl;

    return 0;
}

