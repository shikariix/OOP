#pragma once
#include "Trein.h"

class Stoptrein : public Trein {
public:
	Stoptrein (const int& capaciteit, const float& prijsPerKM, const float& toeslag);
	float GetOpbrengst ();
	float GetToeslag ();
	~Stoptrein ();
};

