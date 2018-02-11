#include <iostream>
#include <cmath>
using namespace std;


int projectPopSize(int, double, double);
void dataEntry(int&, double&, double&);

int main() {
	int startSize;
	int numYears = 5;
	double birthRate;
	double deathRate;

	dataEntry(startSize, birthRate, deathRate);
	int endSize;

	for (int i = 1; i <= numYears; i++) {

		endSize = projectPopSize(startSize, birthRate, deathRate);
		cout << "Year " << i << ": " << startSize << " " << endSize << endl;
		startSize = endSize;
	}
	return 0;
}


int projectPopSize(int sP, double bR , double dR)
{
	return sP * (1 + bR) * (1 - dR);
	
}

void dataEntry(int & sP, double & bR, double & dR)
{
	cout << "Please enter the starting Population " << endl;
	cin >> sP;

	cout << "Please enter the annual birth rate " << endl;
	cin >> bR;

	cout << "Please enter the annual deathRate " << endl;
	cin >> dR;
}