#include "Docent.h"



Docent::Docent(int age, string name, string lesson) : Persoon(name, age) {
	this->les = lesson;
}

string Docent::getLesson() {
	return les;
}

Docent::~Docent() {
}
