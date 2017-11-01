#pragma once
class Vervoermiddel {
public:
	Vervoermiddel (const int& capaciteit, const float& prijsPerKM);
	virtual float GetOpbrengst () = 0;
	virtual int GetCapaciteit () = 0;
	virtual float GetPrijsPerKM () = 0;
	~Vervoermiddel ();


	int capaciteit;
	float prijsPerKM;
};
