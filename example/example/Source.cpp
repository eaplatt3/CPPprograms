#include <iostream>
#include <string>
using namespace std;
//typedef - location

//prototypes

int main()
{
	const int ISIZE = 3;
	int age[ISIZE];
	string name[ISIZE];
	for (int i = 0; i < ISIZE; i++)
	{
		cout << "Enter Name: ";
		cin >> name[i];
		cout << "Enter Age: ";
		cin >> age[i];
	}


	for (int i = 0; i < ISIZE; i++)
	{
		cout << "Name: " << name[i] << "\t age is: " << age[i] << endl;
	}




}