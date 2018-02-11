#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double first;
	double second;
	float percent;
	double difference;
	char yesNo;

	

	do
	{
		cout << "First Amount " << endl;
		cin >> first;
		cout << "second amount " << endl;
		cin >> second;

		if (first > second)
		{
			difference = first - second;
			cout << "the differance is  " << difference << endl;

		}
		else
		{

			difference = second - first;
		}
		percent = (difference / first) * 100;


		cout << fixed << setprecision(2) << "Change is " << percent << endl;

		cout << "another " << endl;
		cin >> yesNo;
		if (yesNo == 'y')
			system("cls");

	} while (yesNo == 'y');
	



	return 0;
}