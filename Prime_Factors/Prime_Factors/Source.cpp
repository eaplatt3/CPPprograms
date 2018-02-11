/*Earl Platt III
  BCS 230
  Problem 2*/

#include<iostream>
using namespace std;

int main()
{
	int num = 1008514753;
	int i = 1;

	//Runs from "i" to "num" to divide the accepted number 
	while (i <= num)
	{
		//Checks if "i" is a factor
		if (num % i == 0)
		{
			int x = 1;
			int y = 0;

			//Checks if its prime or not 
			while (x <= i)
			{
				if (i % x == 0) 
					y++;

					x++;
			}

			//If true it is prime and print numbers
			if (y == 2)
				cout << " " << i << endl;
				
			}

			i++;
		}
		
	return 0;
	}
	