//Program Assignment Ch. 4 Ques. 8
//Math Tutor
//Earl Platt III
//BCS 120
//3/30/2017

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
	int num1;                       //Declare Variables 
	int num2;
	int answ;

	srand(time(0));					//Declare Random Number
	num1 = rand() % 40 + 10;
	num2 = rand() % 40 + 10;


	cout << setw(5) << "  " << num1 << endl;                         //Displayed Problem
	cout << setw(4) << '+' << " " << num2 << endl;
	cout << setw(7) << "----" << endl;
	cout << "What is the Sum of the Two Numbers Above ?" << endl;
	cin >> answ;                                                  //User Enters Answer

	if (answ == num1 + num2)                                        //Test to check if the problem is right
	{
		cout << "Congratulations that is Correct" << endl;
	}
	else
		cout << "The Correct Answer is " << num1 + num2 << endl;

	return 0;
}