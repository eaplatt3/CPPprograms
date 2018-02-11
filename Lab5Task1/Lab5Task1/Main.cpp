#include <iostream>
using namespace std;

int getScores(int[], int);
void printElements(int[], int);
int getAverage(int[], int);
int countPerfect(int[], int);
int countLessThen59(int[], int);

int main()
{
	const int SIZE = 50;
	int array[SIZE];
	int numScores;

	cout << "Enter The Amount of Test Scores to enter " << endl;
	cin >> numScores;

	cout << "This program will allow you to enter up to 20 scores \n"
		<< "and will then report how many perfect scores were entered. \n\n";

	numScores = getScores(array, numScores);

	printElements(array, numScores);

	cout << "The Average is: " << getAverage(array, numScores) << endl;

	cout << "The # of perfect scores: " << countPerfect(array, numScores) << endl;

	cout << "The # of less then 59: " << countLessThen59(array, numScores) << endl;


	system("pause");

	return 0;
}

int getScores(int array[], int numScores)
{
	int num, pos = 0;
	do
	{
		cout << "Enter a score 0 - 100: ";
		cin >> num;
		if (num >= 0 && num <= 100)
		{
			array[pos] = num;
			pos++;
		}
		else if (num > 100)
		{
			cout << "\nInvalid score. Scores may not be grater then 100. \n\n";
		}

	} while (num >= 0 && pos < numScores);

	return pos;
}

void printElements(int array[], int numScores)
{
	for (int i = 0; i < numScores; i++)
	{
		cout << "Element [" << i << "]" << array[i] << endl;
	}

}

int getAverage(int array[], int numScores)
{
	int sum = 0;
	for (int i = 0; i < numScores; i++)
	{
		cout << "Element [" << i << "]" << array[i] << endl;
		sum =+ array[i];
	}


	return sum / numScores;
}

int countPerfect(int arr[], int numScores)
{
	int cnt = 0;

	for (int i = 0; i < numScores; i++)
	{
		if (arr[i] == 100)
			cnt++;
	}
	return cnt;
}


int countLessThen59(int arr[], int numScores)
{
	int cnt = 0;

	for (int i = 0; i < numScores; i++)
	{
		if (arr[i] < 59)
		cnt++;
	}
	return cnt;
}
