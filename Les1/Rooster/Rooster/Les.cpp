#include "Les.h"
#include <iostream>
using namespace std;

//Default constructor
Les::Les()
{
	currentRoom = 001;
	currentTeacher = "Corné";
	studentGroup = "GDV2";
	currentSubject = "Kernmodule";
	currentStartTime = 1;
}

Les::Les(int roomNr, string teacher, string group, string subject, int startTime) {
	currentRoom = roomNr;
	currentTeacher = teacher;
	studentGroup = group;
	currentSubject = subject;
	currentStartTime = startTime;
}

Les::~Les()
{

}

//accessor methods
int Les::getRoom() {
	return currentRoom;
}
float Les::getStartTime() {
	return currentStartTime;
}
string Les::getTeacher() {
	return currentTeacher;
}
string Les::getGroup() {
	return studentGroup;
}
string Les::getSubject() {
	return currentSubject;
}