#pragma once
#include "Vervoermiddel.h"

class Vliegtuig : public Vervoermiddel {
public:
	Vliegtuig (const int& capaciteit, const float& prijsPerKM);
	int GetCapaciteit ();
	float GetPrijsPerKM ();
	float GetOpbrengst ();
	~Vliegtuig ();
};

