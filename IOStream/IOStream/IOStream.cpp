// IOStream.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <time.h>

using namespace std;


int main(){
	string JohnQuote = "A day with my is like a year in hell.";

	ofstream writer("JohnQuote.txt");

	if (!writer) {
		cout << "Error opening file" << endl;
		return -1;
	}
	else {
		writer << JohnQuote << endl;
		writer.close();
	}

	ofstream writer2("JohnQuote.txt", ios::app);

	if (!writer2) {
		cout << "Error opening file" << endl;
		return -1;
	}
	else {
		writer2 << "\n -John Reilly" << endl;
		writer2.close();
	}

	char letter; 

	ifstream reader("JohnQuote.txt");

	if (!reader) {
		cout << "Error opening file" << endl;
		return -1;
	}
	else {

		for (int i = 0; !reader.eof(); i++) {
			reader.get(letter);
			cout << letter;
		}

		cout << endl;
	}
    return 0;
}

