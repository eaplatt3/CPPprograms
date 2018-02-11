#include <iostream>
#include <iomanip>
using namespace std;

//Multiplication Function
void multiplication(int x, int y, int z, int ans)
{

	cout << "What Is The Product of?" << endl;

	if (x > y && x < 10 && y < 10)
	{
		cout << setw(6) << " " << x << endl;
		cout << setw(5) << 'x' << setw(1) << " " << y << endl;
		cout << setw(7) << "---" << endl;
	}

	else if (x > y && x > 9 && y > 9)
	{
		cout << setw(6) << " " << x << endl;
		cout << setw(5) << 'x' << " " << y << endl;
		cout << setw(8) << "----" << endl;
	}

	else if (x > y && x > 9 && y < 10)
	{
		cout << setw(6) << " " << x << endl;
		cout << setw(5) << 'x' << setw(2) << " " << y << endl;
		cout << setw(8) << "----" << endl;
	}
	//if y is top
	else if (y > x && y < 10 && x < 10)
	{
		cout << setw(6) << " " << y << endl;
		cout << setw(5) << 'x' << " " << x << endl;
		cout << setw(7) << "---" << endl;
	}

	else if (y > x && y > 9 && x > 9)
	{
		cout << setw(6) << " " << y << endl;
		cout << setw(5) << 'x' << " " << x << endl;
		cout << setw(8) << "----" << endl;
	}

	else if (y > x && y > 9 && x < 10)
	{
		cout << setw(6) << " " << y << endl;
		cout << setw(5) << 'x' << setw(2) << " " << x << endl;
		cout << setw(8) << "----" << endl;
	}
	else
	{
		cout << setw(6) << " " << y << endl;
		cout << setw(5) << 'x' << " " << x << endl;
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

	z = x * y;

	if (ans == z)
	{
		cout << "That Is Correct" << endl;
	}

	else
		cout << "That is Incorret the Answer is " << z << endl;
}