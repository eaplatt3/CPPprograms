#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main()
{

	int age;
	string name;
	ifstream infile;

	infile.open("nameage.txt");

	infile >> age;
	infile >> name;

	while (!infile.eof())
	{
		cout << " " << age << " " << name << endl;

		infile >> age;
		infile >> name;

	}

	infile.close();
	
	return 0;
}
