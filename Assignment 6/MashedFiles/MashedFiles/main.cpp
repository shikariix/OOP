#include <iostream>
#include <fstream>
#include <string>

#define FILEONE "FileOne.txt"
#define FILETWO "FileTwo.txt"

int main () {
	std::ifstream in_stream;
	std::ifstream second_in_stream;

	in_stream.open (FILEONE);
	second_in_stream.open (FILETWO);
	if (!in_stream) {
		std::cerr << "Probleem bij openen file 1" << std::endl;
		char c;
		std::cin >> c;
		exit (1);
	}
	else if (!second_in_stream) {
		std::cerr << "Probleem bij openen file 2" << std::endl;
		char c;
		std::cin >> c;
		exit (1);
	}

	char ch;
	char ch2;
	std::ofstream out_stream;
	out_stream.open ("mashedfiles.txt");
	if (!out_stream) {
		std::cerr << "Probleem bij openen out file" << std::endl;
		char c;
		std::cin >> c;
		exit (1);
	}

	in_stream >> std::noskipws;
	second_in_stream >> std::noskipws;

	//combine two files
	while (!in_stream.eof ()) {
		in_stream >> ch;
		second_in_stream >> ch2;

		out_stream << ch << ch2;
	}

	out_stream.close ();
	in_stream.close ();
	second_in_stream.close ();
	char c;
	std::cin >> c;

	return 0;
}