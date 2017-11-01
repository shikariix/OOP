#pragma once
#include "Trein.h"

class HSTrein : public Trein {
public:
	HSTrein (const int& capaciteit, const float& prijsPerKM, const float& toeslag);
	float GetOpbrengst ();
	float GetToeslag ();
	~HSTrein ();
};

