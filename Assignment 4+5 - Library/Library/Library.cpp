#include <iostream>
#include "Library.h"


Library::Library () {
}

Library::Library (std::string name) {
	_name = name;
}


Library::~Library () {
	//remove books when destroying library
	books.clear();
}

Library::Library (const Library & library) {
}

void Library::show () {
	//loop through books with iterator
	//for each book, show the title in std::cout
	//std::cout << "   Books in library: " << books->_name << std::endl;
	if (books.size () < 1) {
		std::cout << "The library is empty." << std::endl;
	} else { 
		for (unsigned i = 0; i < books.size (); i++) {
			std::cout << books[i]->_name << std::endl;
		}
	}
}

void Library::addBook (std::string title) {
	Book* newBook = new Book (title);
	books.push_back (newBook);
}
