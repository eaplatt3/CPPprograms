#include "Die.h"

Die::Die() {
		numFace = 1;
		srand(time(0));
	}

	int Die::getNewFaceValue() {
		roll();
		return numFace;
	}

	void Die::roll() {
		numFace = rand() % 6 + 1;
	}
