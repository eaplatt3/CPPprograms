#pragma once
#include <iostream>
#include <ctime>

using namespace std;


class RandomPin
{
private:
	int pinNum;

public:
	RandomPin();
	int getPin();
	void gen();
};