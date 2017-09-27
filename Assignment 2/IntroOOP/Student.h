#pragma once
#include "Persoon.h"

class Student : public Persoon {
public:
	Student(int age, string name, string group);
	string getGroup();
	~Student();

	//unieke variabelen
	string klas;
};