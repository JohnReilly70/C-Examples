// Learning.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <time.h>

using namespace std;


int main()
{
	//cout << "hello\n" << endl;

	//const double pi = 3.1415926535;

	//char mygrade = 'a';

	//bool ishappy = true;

	//int myage = 10;

	//float myweight = 1.21018;

	//double myactualweight = 0.1264542542162;

	//cout << "my weight: " << myweight << endl;

	//cout << "size of int (bytes): " << sizeof(myweight)
	//	<< endl;

	//int largestint = 2147483647;

	//cout << "largest int: " << largestint << endl;

	//int largestintplus1 = 2147483647 + 1;

	//cout << "largest int plus 1: " << largestintplus1 << endl; // just loops over to largest negative number -2147483647

	// simple arithmetic operations

	//cout << 5 + 2 << endl;
	//cout << 5 - 2 << endl;
	//cout << 5 * 2 << endl;
	//cout << 5 / 2 << endl; //returns an interget of 2 as both numbers are intergers, clearly not the correct solution to 5/2
	//cout << 5.0 / 2.0 << endl; //give correct answer as it is now a float or double(? - need to find out)
	//cout << typeid(5.0 / 2.0).name() << endl; // its a double! perhaps a bit over kill for a 1 decimal place number
	//cout << 5 % 2 << endl;

	//int five = 5;

	//cout << "5++ = " << five++ << endl;
	//cout << "++5 = " << ++five << endl;
	//cout << "5-- = " << five-- << endl;
	//cout << "--5 = " << --five << endl;

	//five += 5;
	//cout << "5 += 5 " << five << endl;

	//casting

	//cout << "4 /5 = " << (float)4 / 5 << endl;

	//int age = 70;
	//int ageatlastexam = 16;
	//bool isnotintoxicated = true;

	//if (age > ageatlastexam && isnotintoxicated == true) {
	//	cout << "can drive" << endl;
	//}
	//else if (age >= 100 || age < ageatlastexam) {
	//	cout << "you are either to old or young to drive" << endl;
	//}
	//else {
	//	cout << "cannot drive" << endl;
	//}

	//int greetingoption = 3;

	//switch (greetingoption) {
	//
	//case 1:
	//	cout << "bonjour" << endl;
	//	break;
	//case 2:
	//	cout << "hello" << endl;
	//	break;

	//default:
	//	cout << "default greeting" << endl;
	//
	//}

	//variable = (condition) ? true: false
	//int largestnum = (5 > 2) ? 5 : 2;
	//cout << largestnum << endl;


	//int myfavnumbers[5];

	//int badnumbers[5] = { 4, 13, 14, 24, 34 };

	//cout << "bad number 4:" <<badnumbers[3] << endl;

	//char myname[4][6] = { {'j','o', 'h', 'n' },
	//						{'r','e', 'i', 'l', 'l', 'y'} };

	//cout << "2nd letter in 1st array: " << myname[0][1] << endl;
	//cout << "5th letter in 2st array: " << myname[1][4] << endl;

	//myname[0][2] = 'z';
	//cout << "3rd letter in 1st array: " << myname[0][2] << endl;

	//for (int i = 0;  i <= 4; i++) {
	//	cout << myname[0][i] << endl;
	//}

	//for (int j = 0; j <= 2; j++) {
	//	for (int i = 0; i <= 5; i++) {
	//		cout << myname[j][i];
	//	}
	//	cout << endl;
	//}

	//srand(time(null));
	//int randomnumber = (rand() % 10) + 1;

	//while (randomnumber != 10) {
	//	cout << randomnumber << ", ";

	//	randomnumber = (rand() % 10) + 1;
	//}

	//int index = 1;

	//while (index < 10) {
	//	cout << index << endl;
	//	index++;
	//}

	//do {
	//	cout << index << endl;
	//	index--;
	//} while (index > 1);

	//string numguessed;
	//int intnumguessed = 10;

	//do {
	//	cout << "guess a number between 1 and 10:";
	//	getline(cin, numguessed);
	//	intnumguessed = stoi(numguessed);
	//	cout << intnumguessed << endl;
	//} while (intnumguessed != 10);

	//cout << "you win this time!" << endl;*/


	// string examples

	//char happy[6] = {'h','a', 'p', 'p', 'y'};

	//string birthday = "birthday";

	//cout << happy + birthday << endl;

	//string yourname;
	//cout << "what is your name? ";
	//getline(cin, yourname);
	//cout << "hi, " << yourname << endl;

	//double eulersconstant = 0.57721;
	//string eulerguess;
	//double eulerguessdouble;
	//
	//cout << "what is euler's constant? ";
	////getline(cin, eulerguess);
	//eulerguessdouble = stod(eulerguess);

	//if (eulerguessdouble == eulersconstant) {
	//	cout << "correct!" << endl;
	//}
	//else {
	//	cout << "incorrect!" << endl; 
	//}

	//cout << "size of string " << eulerguess.size() << endl;
	//cout << "is string empty " << eulerguess.empty() << endl;
	//cout << eulerguess.append(" was your guess") << endl;

	//string dogstring = "dog";
	//string catstring = "cat";

	//cout << dogstring.compare(catstring) << endl;
	//cout << dogstring.compare(dogstring) << endl;
	//cout << catstring.compare(dogstring) << endl;


	//string wholename = yourname.assign(yourname);
	//cout << wholename << endl;

	//string firstname = wholename.assign(wholename, 0, 4);
	//cout << firstname << endl;

	//int lastnameindex = yourname.find("reilly", 0);
	//cout << "index for last name: " << lastnameindex << endl;

	//yourname.insert(4, " sexy");
	//cout << yourname << endl;

	//yourname.erase(5, 7);
	//cout << yourname << endl;

	//yourname.replace(5,3,"bum");
	//cout << yourname << endl;

	//vector <int> lotteryNumbersVect(10);

	//int lotteryNumbersArray[5] = { 4,13,14,24,34 };

	//lotteryNumbersVect.insert(lotteryNumbersVect.begin(), lotteryNumbersArray, lotteryNumbersArray + 3);

	//cout << lotteryNumbersVect.at(2) << endl;

	//lotteryNumbersVect.insert(lotteryNumbersVect.begin()+5, 25);

	//cout << lotteryNumbersVect.at(5) << endl;

	//lotteryNumbersVect.push_back(64);

	//cout << "Final Value " << lotteryNumbersVect.back() << endl;

	//lotteryNumbersVect.pop_back();

	//cout << "First Value " << lotteryNumbersVect.front() << endl;

	//lotteryNumbersVect.pop_back();

	//cout << "Is vectory empy? 0 for not empty 1 for empty: " << lotteryNumbersVect.empty() << endl;

	//cout << "Size of Vector " << lotteryNumbersVect.size() << endl;

    return 0;
}

