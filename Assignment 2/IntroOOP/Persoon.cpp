#include "Persoon.h"



Persoon::Persoon(string name, int age) {
	this->naam = name;
	this->leeftijd = age;
}

int Persoon::getAge() {
	return leeftijd;
}

string Persoon::getName() {
	return naam;
}

Persoon::~Persoon() {
}
