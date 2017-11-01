#include "HSTrein.h"


HSTrein::HSTrein (const int & capaciteit, const float & prijsPerKM, const float & toeslag) : Trein(capaciteit, prijsPerKM, toeslag) {
}

float HSTrein::GetOpbrengst () {
	return capaciteit * (prijsPerKM + toeslag);
}

float HSTrein::GetToeslag () {
	return toeslag;
}

HSTrein::~HSTrein () {
}
