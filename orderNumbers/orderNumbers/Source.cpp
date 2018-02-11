//get 2 numbers orginaize them by size print them are the functions getNum& and orderNums& 

#include <iostream>
using namespace std;

void getNums(int&, int&);

void orderNums(int&, int&);

main()
{
	int x;
	int y;

	getNums(x, y);

	orderNums(x, y);

	cout << "The order of the numbers is " << x << " and " << y << endl;

	return 0;
}

void getNums(int& input1, int& input2)
{
	cout << "Please enter number 1" << endl;
	cin >> input1;

	cout << "Please enter number 2" << endl;
	cin >> input2;

}

void orderNums(int& num1, int& num2)
{
	int temp;

	if (num1 > num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
}

