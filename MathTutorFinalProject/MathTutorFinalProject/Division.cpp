#include <iostream>
#include <iomanip>
using namespace std;

//Division Function
void division(int x, int y, int z, int ans, int t)
{
	t = x * y;

	cout << "What Is The Quotient of" << endl;

	cout << setw(6) << " " << t << " " << char(246) << " " << x << setw(2) << '=' << endl;

	cin >> ans;

	while (cin.fail())
	{
		cout << "Invalid Input Please Re-enter Your Answer" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> ans;
	}

	cout << "Answer: " << ans << endl;

	z = t / x;

	if (ans == z)
	{
		cout << "That is Correct" << endl;
	}

	else
		cout << "That is Incorrect the Correct Answer is " << z << endl;

}