#pragma once

#include "book.h"
#include <vector>
#include <string>

class Library {
public:
	Library ();
	Library (std::string name);
	virtual ~Library ();
	Library (const Library& library);

	void show ();
	void addBook (std::string title);

private:
	std::string _name = "Default";
	std::vector<Book*> books;
};

