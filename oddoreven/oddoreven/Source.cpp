//Earl Platt III
//BCS 120	
//Function Class Assignment 

#include <iostream>
using namespace std;

bool oddeven(int n); //ProtoType

int main()
{
	//Define Variable
	int x;
	cout << "Enter a Number I Will Tell You if its Even or Odd" << endl;
	cin >> x;
	
	//Test if x is even or odd

	//Print Returned Value
	//cout << "The Number You entered will return a 0 for even and 1 for odd << oddeven(x) << endl; 

	//Using Return Value
	/*if (oddeven(x))
		cout << "The number You Entered is even" << endl;
	else
		cout << "The Number You Entered is odd" << endl;*/

	// Saving Return Value
	if (oddeven(x) == 1) //Function Call 
		cout << "The Number is Even" << endl;

	else
		cout << "The Number is Odd" << endl;
	
		return 0;
}

//Function
bool oddeven(int n)  //Header Return Type Name
{
	//return n % 2;
	
	if (n % 2 == 0)
	{
	return true;
	}
	else
	return false;

}
