#include "Student.h"



Student::Student(int age, string name, string group) {
	leeftijd = age;
	naam = name;
	klas = group;
}

int Student::getAge() {
	return leeftijd;
}

string Student::getName() {
	return naam;
}

Student::~Student() {
}