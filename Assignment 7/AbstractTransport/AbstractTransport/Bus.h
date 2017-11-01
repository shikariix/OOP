#pragma once
#include "Vervoermiddel.h"

class Bus : public Vervoermiddel {
public:
	Bus (const int& capaciteit, const float& prijsPerKM);
	int GetCapaciteit ();
	float GetPrijsPerKM ();
	float GetOpbrengst ();
	~Bus ();
};

