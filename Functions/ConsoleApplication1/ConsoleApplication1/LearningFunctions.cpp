// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <time.h>

using namespace std;

int addNums(int first, int second, int third = 0) {
	return first + second + third;
}


int getFactorial(int number) {
	int sum;

	if (number == 1) sum = 1;
	else sum = getFactorial(number - 1)*number;
	return sum;
}

int main()
{
	cout << addNums(1,2) << endl;
	cout << addNums(1, 2, 3) << endl;

	cout << getFactorial(2) << endl;

    return 0;
}

