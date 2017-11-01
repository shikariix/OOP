#include "Trein.h"



Trein::Trein (const int& capaciteit, const float& prijsPerKM) : Vervoermiddel (capaciteit, prijsPerKM) {

}

Trein::Trein (const int & capaciteit, const float & prijsPerKM, const float & toeslag): Vervoermiddel (capaciteit, prijsPerKM) {
	this->toeslag = toeslag;
}

int Trein::GetCapaciteit () {
	return capaciteit;
}

float Trein::GetPrijsPerKM () {
	return prijsPerKM;
}

float Trein::GetToeslag () {
	return toeslag;
}

float Trein::GetOpbrengst () {
	return (capaciteit * prijsPerKM) + toeslag;
}


Trein::~Trein () {
}
