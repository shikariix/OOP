#pragma once
#include "Vervoermiddel.h"

class Trein : public Vervoermiddel {
public:
	Trein (const int& capaciteit, const float& prijsPerKM);
	Trein (const int& capaciteit, const float& prijsPerKM, const float& toeslag);
	int GetCapaciteit ();
	float GetPrijsPerKM ();
	virtual float GetToeslag () = 0;

	virtual float GetOpbrengst () = 0;
	~Trein ();

	float toeslag;
};

