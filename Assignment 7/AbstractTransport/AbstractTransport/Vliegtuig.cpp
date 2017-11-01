#include "Vliegtuig.h"



Vliegtuig::Vliegtuig (const int& capaciteit, const float& prijsPerKM) : Vervoermiddel (capaciteit, prijsPerKM) {

}

int Vliegtuig::GetCapaciteit () {
	return capaciteit;
}

float Vliegtuig::GetPrijsPerKM () {
	return prijsPerKM;
}

float Vliegtuig::GetOpbrengst () {
	return capaciteit * prijsPerKM;
}


Vliegtuig::~Vliegtuig () {
}
