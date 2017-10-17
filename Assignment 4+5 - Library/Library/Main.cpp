#include <iostream>
#include "Library.h"

int main () {
	Library* library1 = new Library ("Whymsical Library");

	std::cout << "Check 1: " << std::endl;
	library1->addBook ("Eragon");
	library1->show();

	std::cout << "Check 2: " << std::endl;
	library1->addBook ("Harry Potter");

	library1->show ();

	char c;
	std::cin >> c;

	return 0;
}