#pragma once

#include <iostream>
using namespace std;

class Les {
private:
	string currentTeacher, studentGroup, currentSubject;
	int currentStartTime, duration, currentRoom;

public:
	//Constructor
	Les();
	Les(int roomNr, string teacher, string group, string subject, int startTime);

	//Destructor 
	~Les();
	
	
	
	//accessor methods;
	int getRoom();
	float getStartTime();
	string getTeacher();
	string getGroup();
	string getSubject();
};

