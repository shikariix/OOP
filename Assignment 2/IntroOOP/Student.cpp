#include "Student.h"



Student::Student(int age, string name, string group) : Persoon(name, age) {
	this->klas = group;
}

string Student::getGroup() {
	return klas;
}

Student::~Student() {
}