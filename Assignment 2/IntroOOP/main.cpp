#include <iostream>
#include <string>
#include "Docent.h"

using namespace std;

int main() {
	Persoon teach = Docent::Docent(28, "Fred", "Geschiedenis");

	cout << teach.getAge()<< endl;
	cout << teach.getName() << endl;

	char c;
	cin >> c;
	return 0;
}