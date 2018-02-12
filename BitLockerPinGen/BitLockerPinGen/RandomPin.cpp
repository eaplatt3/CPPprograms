#include "RandomPin.h"

RandomPin::RandomPin() {
	pinNum = 0;
	srand(time(0));
}

int RandomPin::getPin() {
	gen();
	return pinNum;
}

void RandomPin::gen() {
	pinNum = rand() % 9;
}