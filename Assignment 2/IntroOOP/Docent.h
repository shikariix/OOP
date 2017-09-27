#pragma once
#include "Persoon.h"

class Docent : public Persoon {
public:
	Docent(int age, string name, string lesson);
	string getLesson();
	~Docent();

	//unieke variabelen
	string les;
};

