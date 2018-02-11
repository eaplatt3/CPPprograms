#include <iostream>
#include <iomanip>
using namespace std;

//Subtraction Function
void subtraction(int x, int y, int z, int ans)
{

	cout << "What Is The Difference?" << endl;

	//if x is top
	if (x > y && x < 10 && y < 10)
	{
		cout << setw(6) << " " << x << endl;
		cout << setw(5) << '-' << setw(1) << " " << y << endl;
		cout << setw(7) << "---" << endl;

		z = x - y;
	}

	else if (x > y && x > 9 && y > 9)
	{
		cout << setw(6) << " " << x << endl;
		cout << setw(5) << '-' << " " << y << endl;
		cout << setw(8) << "----" << endl;

		z = x - y;
	}

	else if (x > y && x > 9 && y < 10)
	{
		cout << setw(6) << " " << x << endl;
		cout << setw(5) << '-' << setw(2) << " " << y << endl;
		cout << setw(8) << "----" << endl;

		z = x - y;
	}
	//if y is top
	else if (y > x && y < 10 && x < 10)
	{
		cout << setw(6) << " " << y << endl;
		cout << setw(5) << '-' << " " << x << endl;
		cout << setw(7) << "---" << endl;

		z = y - x;
	}

	else if (y > x && y > 9 && x > 9)
	{
		cout << setw(6) << " " << y << endl;
		cout << setw(5) << '-' << " " << x << endl;
		cout << setw(8) << "----" << endl;

		z = y - x;
	}

	else if (y > x && y > 9 && x < 10)
	{
		cout << setw(6) << " " << y << endl;
		cout << setw(5) << '-' << setw(2) << " " << x << endl;
		cout << setw(8) << "----" << endl;

		z = y - x;
	}
	else
	{
		cout << setw(6) << " " << y << endl;
		cout << setw(5) << '-' << " " << x << endl;
		cout << setw(8) << "----" << endl;

		z = y - x;
	}

	cin >> ans;

	while (cin.fail())
	{
		cout << "Invalid Input Please Re-enter Your Answer" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> ans;
	}

	cout << "Answer: " << ans << endl;

	if (ans == z)
	{
		cout << "That Is Corret" << endl;
	}

	else
		cout << "That is Incorret the Answer is " << z << endl;
}