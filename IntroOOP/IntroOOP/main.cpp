#include <iostream>
#include "Docent.h"

using namespace std;

int main() {
	Persoon teach = Docent::Docent(28, "Fred", "Geschiedenis");
	cout << Docent::getAge << endl;
	return 0;
}