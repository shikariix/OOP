#include "Les.h"



Les::Les()
{
}


Les::~Les()
{
}

int Les::getRoom () {
	return currentRoom;
}

float Les::getStartTime () {
	return currentStartTime;
}

string Les::getTeacher () {
	return currentTeacher;
}

string Les::getGroup () {
	return studentGroup;
}

string Les::getSubject () {
	return currentSubject;
}
