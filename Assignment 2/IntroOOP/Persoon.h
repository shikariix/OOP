#pragma once
#include <iostream>
using namespace std;

class Persoon {
public:
	Persoon(string name, int age);
	virtual int getAge();
	virtual string getName();
	~Persoon();

private:
	int leeftijd;
	string naam;
};

