#include "Grid.h"
#include <iostream>
#include <string>
#include <windows.h>

Grid::Grid () {

	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			int setAlive = rand ();
			Cells[i][j].setLiving (setAlive);
			std::cout << Cells[i][j].getLivingString ();
		}
		std::cout << std::endl;
	}
	std::cout << "Press 1 to reload!" << std::endl;
}
void Grid::refreshGrid () {
	COORD cur = {0, 0};
	SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), cur);
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			Cell Neighbors[8] = {Cells[i - 1][j - 1], Cells[i - 1][j],
								 Cells[i - 1][j + 1], Cells[i][j + 1],
								 Cells[i + 1][j + 1], Cells[i + 1][j],
								 Cells[i + 1][j - 1], Cells[i][j - 1]};
			bool NeighborState[8];
			int livingNeighbors;
			for (int k = 0; k < 8; k++) {
				livingNeighbors = 0;
				bool neighborState = Neighbors[k].getLivingBool ();
				NeighborState[k] = neighborState;
				for (int h = 0; h < k; h++) {
					if (NeighborState[h] == true) {
						livingNeighbors++;
					}
				}
			}
			bool currentState = Cells[i][j].getLivingBool();
			if (livingNeighbors > 3 || livingNeighbors < 2) {
				Cells[i][j].setLiving (false);
			}
			else if (livingNeighbors == 3 && !currentState) {
				Cells[i][j].setLiving (true);
			}
			std::cout << Cells[i][j].getLivingString ();
		}
		std::cout << std::endl;
	}
	std::cout << "Press 1 to reload!" << std::endl;
}