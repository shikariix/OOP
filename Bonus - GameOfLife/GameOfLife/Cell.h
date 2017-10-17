#pragma once
#include <string>
class Cell {
public:
	Cell ();
	std::string getLivingString ();
	bool getLivingBool ();
	void setLiving (int setAlive);
	~Cell ();
private:
	bool isAlive;
};

