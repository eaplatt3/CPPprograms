//Addition Function
#include <iostream>
#include <iomanip>

using namespace std;

void addition(int x, int y, int z, int ans)
{
	cout << "What Is The Sum?" << endl;

	//if x is top
	if (x > y && x < 10 && y < 10)
	{
		cout << setw(6) << " " << x << endl;
		cout << setw(5) << '+' << setw(1) << " " << y << endl;
		cout << setw(7) << "---" << endl;
	}

	else if (x > y && x > 9 && y > 9)
	{
		cout << setw(6) << " " << x << endl;
		cout << setw(5) << '+' << " " << y << endl;
		cout << setw(8) << "----" << endl;
	}

	else if (x > y && x > 9 && y < 10)
	{
		cout << setw(6) << " " << x << endl;
		cout << setw(5) << '+' << setw(2) << " " << y << endl;
		cout << setw(8) << "----" << endl;
	}
	//if y is top
	else if (y > x && y < 10 && x < 10)
	{
		cout << setw(6) << " " << y << endl;
		cout << setw(5) << '+' << " " << x << endl;
		cout << setw(7) << "---" << endl;
	}

	else if (y > x && y > 9 && x > 9)
	{
		cout << setw(6) << " " << y << endl;
		cout << setw(5) << '+' << " " << x << endl;
		cout << setw(8) << "----" << endl;
	}

	else if (y > x && y > 9 && x < 10)
	{
		cout << setw(6) << " " << y << endl;
		cout << setw(5) << '+' << setw(2) << " " << x << endl;
		cout << setw(8) << "----" << endl;
	}
	else
	{
		cout << setw(6) << " " << y << endl;
		cout << setw(5) << '+' << " " << x << endl;
		cout << setw(8) << "----" << endl;
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

	z = x + y;

	if (ans == z)
	{
		cout << "That Is Correct" << endl;
	}

	else
		cout << "That is Incorret the Answer is " << z << endl;


}