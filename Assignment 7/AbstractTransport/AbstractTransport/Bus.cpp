#include "Bus.h"



Bus::Bus (const int& capaciteit, const float& prijsPerKM) : Vervoermiddel (capaciteit, prijsPerKM) {
}

int Bus::GetCapaciteit () {
	return capaciteit;
}

float Bus::GetPrijsPerKM () {
	return prijsPerKM;
}


float Bus::GetOpbrengst () {
	return capaciteit * prijsPerKM;
}

Bus::~Bus () {
}
