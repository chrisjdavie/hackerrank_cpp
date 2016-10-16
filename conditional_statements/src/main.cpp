/*
 * https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else?h_r=next-challenge&h_v=zen
 *
 * hackerrank c++ conditionals challenge
 *
 * (clearly better with arrays, but that's a later topic)
 *
 * main.cpp
 *
 *  Created on: Oct 16, 2016
 *      Author: chris
 */

#include <iostream>

using namespace std;

int main(){

	int N;

	cin >> N;

	if (N==1)
		cout << "one" << endl;
	if (N==2)
		cout << "two" << endl;
	if (N==3)
		cout << "three" << endl;
	if (N==4)
		cout << "four" << endl;
	if (N==5)
		cout << "five" << endl;
	if (N==6)
		cout << "six" << endl;
	if (N==7)
		cout << "seven" << endl;
	if (N==8)
		cout << "eight" << endl;
	if (N==9)
		cout << "nine" << endl;
	if (N>9)
		cout << "Greater than 9" << endl;

	return 0;
}


