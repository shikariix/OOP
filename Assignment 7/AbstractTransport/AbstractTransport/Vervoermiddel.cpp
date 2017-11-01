#include "Vervoermiddel.h"

Vervoermiddel::Vervoermiddel (const int& capaciteit, const float& prijsPerKM) : capaciteit(capaciteit), prijsPerKM(prijsPerKM) {
	this->capaciteit = capaciteit;
	this->prijsPerKM = prijsPerKM;
}


Vervoermiddel::~Vervoermiddel () {
}
