#include "Docent.h"



Docent::Docent(int age, string name, string lesson) {
	leeftijd = age;
	naam = name;
	les = lesson;
}

int Docent::getAge() {
	return leeftijd;
}

string Docent::getName() {
	return naam;
}

Docent::~Docent() {
}
