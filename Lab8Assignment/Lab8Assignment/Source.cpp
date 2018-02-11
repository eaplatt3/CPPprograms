#include <iostream>
#include <string>
using namespace std;

//Class Declartion
class SnowCondition {
private:
	int date;
	double base;

public:
	//Member Functions
	SnowCondition()
	{
		date = base = 0;
	}
	SnowCondition(int d, double b)
	{
		date = d, base = b;
	}

	void setDate(int d)
	{
		int date = d;
	}

	int getDate()
	{
		return date;
	}

	void setBase(double b)
	{
		double base = b;
	}

	double getBase()
	{
		return base;
	}

};

void readSnow(SnowCondition[], int);
void sortSnow(SnowCondition[], int);
void printArray(string month, int startDate, int endDate, SnowCondition week[]);

int main()
{
	const int SIZE = 7;
	SnowCondition weekSnowConditions[SIZE];
	string month;
	int startDate;
	int endDate;

	//User Input 
	cout << "Please Enter the Month You Want to Measure" << endl;
	cin >> month;
	cout << "Please Enter the Start Date" << endl;
	cin >> startDate;
	cout << "Please Enter the End Date" << endl;
	cin >> endDate;

	readSnow(weekSnowConditions, (endDate - startDate));
	sortSnow(weekSnowConditions, (endDate - startDate));
	printArray(month, startDate, endDate, weekSnowConditions);

	system("pause");
	return 0;
}


void readSnow(SnowCondition week[], int size) {
	double snowValue = 0;
	for (int i = 0; i < size; i++) {

		cout << "Enter the snow depth for the day number: " << i << " : ";
		cin >> snowValue;
		week[i].setDate(i);
		SnowCondition tmpweek(i, snowValue);
		week[i] = tmpweek;
	}
}

//Sorting the Array of Objects
void sortSnow(SnowCondition week[], int size)
{
	for (int outer = size - 1; outer > 0; outer--) {
		for (int inner = 0; inner < outer; inner++) {
			if (week[inner].getBase() > week[inner + 1].getBase()) {
				SnowCondition temp(week[inner].getDate(), week[inner].getBase());
				week[inner] = week[inner + 1];
				week[inner + 1] = temp;
			}
		}
	}
}

//Printing the Report 
void printArray(string month, int startDate, int endDate, SnowCondition week[])
{
	cout << "Snow Report " << month << " days: " << startDate << " - " << endDate << endl;
	cout << "Date" "\t";
	cout << "Base" "\n";
	for (int i = 0; i<(endDate - startDate); i++) {
		cout << week[i].getDate() + startDate << "\t" << week[i].getBase() << endl;
	}

	return;
}