#pragma once
#include <string>

class Book {
public:
	Book ();
	Book (std::string name);
	virtual ~Book ();

	std::string _name = "Unknown";
};

