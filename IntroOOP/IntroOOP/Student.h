#pragma once
#include "Persoon.h"

class Student : public Persoon {
public:
	Student();
	~Student();

	//unieke variabelen
	string klas;
};