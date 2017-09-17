#pragma once
#include <iostream>
using namespace std;

class Persoon {
public:
	Persoon();
	virtual int getAge();
	virtual string getName();
	~Persoon();

	
	int leeftijd;
	string naam;
};

