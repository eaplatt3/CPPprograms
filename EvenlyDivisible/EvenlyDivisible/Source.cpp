////////////////// Problem 3 //////////
//  2520 is the smallest number that can be divided by
//   each of the numbers from 1 to 10 without any remainder.
//  What is the smallest positive number that is evenly
//   divisible by all of the numbers from 1 to 14?
//
//
//
//
///////////////////////////////////////
#include <iostream>
using namespace std;
int main() {
	int num = 1, i = 1;
	while (i <= 14)
		//Check the next factor
		if (num % i == 0)
			i++;
		else {
			num++; // check next number
			i = 1;
		}
		cout << num << endl;

		system("pause");
			return 0;
}