#pragma once
#include "Persoon.h"

class Docent : public Persoon {
public:
	Docent(int age, string name, string lesson);
	int getAge();
	string getName();
	~Docent();

	//unieke variabelen
	string les;
};

