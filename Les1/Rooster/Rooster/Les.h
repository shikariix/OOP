#pragma once

#include <iostream>
using namespace std;

class Les {
private:
	int currentStartTime, duration;

public:
	//Constructor
	Les();
	Les(int roomNr, string teacher, string group, string subject, int startTime);

	//Destructor 
	~Les();
	
	//Should these be public?
	int currentRoom;
	string currentTeacher, studentGroup, currentSubject;
	
	//accessor methods;
	int getRoom();
	float getStartTime();
	string getTeacher();
	string getGroup();
	string getSubject();
};

