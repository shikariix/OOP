#pragma once

#include <iostream>
using namespace std;

class Les {
private:
	string currentTeacher, studentGroup, currentSubject;
	int currentStartTime, duration, currentRoom;
public:
	Les();
	~Les();
	
	
	
	//accessor methods;
	int getRoom();
	float getStartTime();
	string getTeacher();
	string getGroup();
	string getSubject();
};

