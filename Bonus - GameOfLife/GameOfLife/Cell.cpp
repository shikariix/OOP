#include "Cell.h"


Cell::Cell () {
	isAlive = false;
}

std::string Cell::getLivingString () {
	if (isAlive) {
		return "0";
	}
	else {
		return " ";
	}
}

bool Cell::getLivingBool () {
	return isAlive;
}

void Cell::setLiving (int setAlive) {
	if (setAlive % 2 == 1) {
		isAlive = true;
	}
	else {
		isAlive = false;
	}
}


Cell::~Cell () {
}
