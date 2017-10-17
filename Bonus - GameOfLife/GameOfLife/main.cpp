#pragma once
#include <iostream>

#include "Cell.h"
#include "Grid.h"


int main () {
	//stack around this variable is being corrupted
	Grid* activeGrid = new Grid ();

	int c;
	
	while (1) {
		std::cin >> c;
		if (c == 1) {
			activeGrid->refreshGrid ();
		}
		else {
			break;
		}
	}
	
	return 0;
}