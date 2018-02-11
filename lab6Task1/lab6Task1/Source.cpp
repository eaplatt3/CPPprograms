
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
// function prototypes
int getFileLineNums(string);

int main() {
	int lines = 0;
	int i = 0;
	int k = 0;
	double avg;
	double tot = 0;
	ifstream inpt;
	string str, filename = "inputFile.txt";
	const int dd = getFileLineNums(filename);
	double grds[13];
	inpt.open(filename);
	while (inpt.good())
		inpt >> grds[i++];
	inpt.close();
	double max = grds[0];
	double min = grds[0];
	for (int i = 0; i < 13; i++)
	{
		cout << grds[i] << endl;
		tot += grds[i];

		if (max < grds[i])
			max = grds[i];

		if (min > grds[i])
			min = grds[i];

	}
	avg = tot / 13;
	cout << "avg is: " << avg << endl;
	cout << "max is: " << max << endl;
	cout << "min is: " << min << endl;

	system("pause");
	return 0;
}

int getFileLineNums(string filename) {
	int lines = 0;
	string str;
	ifstream inpt(filename);
	while (getline(inpt, str))
		lines++;
	inpt.close();
	return lines;
}