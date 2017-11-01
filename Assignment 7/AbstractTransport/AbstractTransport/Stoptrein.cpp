#include "Stoptrein.h"


Stoptrein::Stoptrein (const int & capaciteit, const float & prijsPerKM, const float & toeslag) : Trein (capaciteit, prijsPerKM, toeslag) {
}

float Stoptrein::GetOpbrengst () {
	return capaciteit * (prijsPerKM + toeslag);
}

float Stoptrein::GetToeslag () {
	return toeslag;
}

Stoptrein::~Stoptrein () {
}
