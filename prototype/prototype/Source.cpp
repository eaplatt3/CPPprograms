#include <iostream>
using namespace std;

//Prototype Defined
int squareit(int x);
int doubleit(int n);

int main() 
{

	int x;

	cout << "Enter a number and ill double it" << endl;
	cin >> x;
	//Calls Function
	cout << "the number you entered double is " << doubleit(x) << endl;
	cout << "the number you entered squared is " << squareit(x) << endl;
	cout << "the orignal number is " << x << endl;

	int squareit(int x)
	{
		return x * x;
	}
	int doubleit(int n)
	{
		return n * 2;
	}

	return 0;
}