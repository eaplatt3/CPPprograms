/*Earl A Platt II
  BCS 230
  Problem_2*/

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream inputFile;
	string row;
	int ctr = 0;

	inputFile.open("IRIS.csv");

	//Loops Through the File and Counts the Rows
	while (getline(inputFile, row))
		ctr++;

	//Displays The Rows Counts
	cout << "the number of rows are: " << ctr << endl;

	inputFile.close();

    return 0;
}

