#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Die {

public:
	Die();
	int getNewFaceValue();
	void roll();

private:
	int numFace;


};