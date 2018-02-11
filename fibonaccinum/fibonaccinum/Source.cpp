/*Earl A. Platt III
  BCS 230
  Assignement 1
  Project 1*/

#include <iostream>
using namespace std;

int main()
{
	
	const int MAX_VAL = 2000000;
	int fibNum1 = 1;
	int fibNum2 = 2;
	int newFibTerm = 0;
	int sum = 0;

	while (fibNum1 <= MAX_VAL) 
	{
		cout << fibNum1 << endl;

		//Find Odd Numbers by excluding all the even numbers
		if (fibNum1 % 2 != 0)
		{
			sum += fibNum1;
		}

		//The algorithm that produces the Fibonacci sequence
		newFibTerm = fibNum1 + fibNum2;
		fibNum1 = fibNum2;
		fibNum2 = newFibTerm;
	}

	cout << "The Sum is: " << sum << endl;

	cin.get();
		return 0; 
}