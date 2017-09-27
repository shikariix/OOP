#include <iostream>
#include <string>
#include "Docent.h"

using namespace std;

int main() {
	Persoon teach = Docent::Docent(28, "Fred", "Geschiedenis");

	cout << teach.leeftijd << endl;
	cout << teach.naam << endl;
	return 0;
}