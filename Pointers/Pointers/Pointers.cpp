// Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <time.h>

using namespace std;

void makeMyYoung(int* age) {
	cout << "I used to be " << *age << endl;
	*age = 21;
}


void actYourAge(int& age) {
	age = 39;
}

int main()
{

	int myAge = 28;
	char myGrade = 'A';

	cout << "Size of Int " << sizeof(myAge) << endl;
	cout << "Size of Char " << sizeof(myGrade) << endl;

	cout << "myAge is located at " << &myAge << endl;


	int* agePtr = &myAge;

	cout << "Address of Pointer " << agePtr << endl;
	cout << "Data of Pointer " << *agePtr << endl;

	int badNums[5] = { 4,13,14,25,34 };

	int* numArrayPtr = badNums;

	cout << "Address" << numArrayPtr << " Value " << *numArrayPtr << endl;

	numArrayPtr++;

	cout << "Address" << numArrayPtr << " Value " << *numArrayPtr << endl;

	cout << "Address" << badNums << " Value " << *badNums << endl;

	makeMyYoung(&myAge);

	cout << "I'm " << myAge << " years old" << endl;

	int& ageRef = myAge;

	cout << "myAge : " << myAge << endl;

	ageRef++;

	cout << "myAge : " << myAge << endl;

	actYourAge(ageRef);

	cout << "myAge : " << myAge << endl;

    return 0;

}

