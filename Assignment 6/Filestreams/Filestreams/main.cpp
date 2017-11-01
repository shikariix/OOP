#include <iostream>
#include <fstream>
#include <string>

#define FILEONE "FileOne.txt"

int main () {
	std::ifstream in_stream;

	in_stream.open (FILEONE);
	if (!in_stream) {
		std::cerr << "Probleem bij openen file 1" << std::endl;
		char c;
		std::cin >> c;
		exit (1);
	}

	char ch;
	std::ofstream out_stream;
	out_stream.open ("backwards.txt");
	if (!out_stream) {
		std::cerr << "Probleem bij openen out file" << std::endl;
		char c;
		std::cin >> c;
		exit (1);
	}

	in_stream >> std::noskipws;

	in_stream.seekg (-1, in_stream.end);
	int length = in_stream.tellg ();

	//put letters in new file backwards
	for (int i = 1; i < length; i++) {
		in_stream.seekg (-i, in_stream.end);
		in_stream.get (ch);
		out_stream << ch;
	}

	in_stream.close ();
	out_stream.close ();
	char c;
	std::cin >> c;

	return 0;
}