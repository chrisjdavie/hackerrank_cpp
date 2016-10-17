/*
 * https://www.hackerrank.com/challenges/c-tutorial-for-loop
 *
 * hacker rank c++ for loop tutorial
 *
 * print code taken from previous question (conditional statements)
 *
 * main.cpp
 *
 *  Created on: Oct 17, 2016
 *      Author: chris
 */
#include <iostream>

using namespace std;

void output(int);

int main(){

	int a, b;

	cin >> a >> b;

	for (int i = a; i <= b; i++)
		output(i);

	return 0;
}


void output(int N){

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
	if (N>9){
		if (N%2)
			cout << "odd" << endl;
		else
			cout << "even" << endl;
	}
}
