#pragma once
#include "Persoon.h"

class Student : public Persoon {
public:
	Student(int age, string name, string group);
	int getAge();
	string getName();
	~Student();

	//unieke variabelen
	string klas;
};