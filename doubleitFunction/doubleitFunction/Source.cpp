#include <iostream>
using namespace std;

//Function Defined
int squareit(int x)
{
	return x * x;
}
int doubleit(int n)
{
	return n * 2;
}


int main() {


	int x;

	cout << "Enter a number and ill double it" << endl;
	cin >> x;
	                                             //Calls Function
	cout << "the number you entered double is " << doubleit(x) << endl;
	cout << "the number you entered squared is " << squareit(x) << endl;
	cout << "the orignal number is " << x << endl;
	return 0; 
}