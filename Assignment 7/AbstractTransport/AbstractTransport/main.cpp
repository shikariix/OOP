#include <iostream>
#include "Vervoermiddel.h"
#include "Trein.h"
#include "HSTrein.h"
#include "Stoptrein.h"
#include "Bus.h"
#include "Vliegtuig.h"

#include <string>

int main () {
	//Vervoermiddel is abstract en mag niet gebruikt worden
	//Vervoermiddel vervoer = Vervoermiddel (45, 2);

	Bus bus = Bus (30, 5.55f);
	std::cout << "De opbrengst voor bus is " << bus.GetOpbrengst () << std::endl;

	//Trein is abstract en mag niet gebruikt worden

	//Trein trein = Trein (250, 6, 2);
	HSTrein trein = HSTrein (255, 13, 1.5);

	Stoptrein trein2 = Stoptrein (175, 13, 0);

	std::cout << "De opbrengst voor trein is " << trein.GetOpbrengst () << std::endl;
	std::cout << "De opbrengst voor trein2 is " << trein2.GetOpbrengst () << std::endl;


	//Voor een andere keer: Opdelen in vervoer over spoor, land, water, lucht
	//Abstract class voor elk? Misschien niet perse nodig

	//Ik begin nu te denken dat de opdracht ook niet is om waardes in de objecten te stoppen want zo is de prijs voor een treinkaartje niet perse hetzelfde als voor een HStreinkaartje??
	//Ik kom hier nog op terug hoop ik

	char c;
	std::cin >> c;

	return 0;
}