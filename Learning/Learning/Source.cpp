
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <time.h>

using namespace std;


int addNumbers(int first, int second = 0) {
	int combinedValue = first + second;

	return combinedValue;
}

int addNumbers(int first, int second, int third) {
	int combinedValue = first + second + third;

	return combinedValue;
}


int main() {

	cout << addNumbers(1) << endl;

	cout << addNumbers(1, 5, 6) << endl;

}