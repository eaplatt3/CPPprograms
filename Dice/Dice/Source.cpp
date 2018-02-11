#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Die.h"

using namespace std;

int main() {

	Die die1, die2;
	int val = die1.getNewFaceValue();

	cout << "Rolling Die 1 > " << val << endl;

	cout << "Rolling Die 2 > " << die2.getNewFaceValue() << endl;

	system("pause");

		return 0;
}