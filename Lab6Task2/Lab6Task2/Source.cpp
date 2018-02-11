
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
// function prototypes
int getFileLineNums(string);

int main() {
	int lines = 0;
	int i = 0;
	ifstream inpt;
	string str, filename = "WorldSeriesWinners.txt";
	const int dd = getFileLineNums(filename);
	double grds[65];
	inpt.open(filename);
	while (inpt.good())
		inpt >> grds[i++];
	inpt.close();
	for (double c : grds)
		cout << c << endl;

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