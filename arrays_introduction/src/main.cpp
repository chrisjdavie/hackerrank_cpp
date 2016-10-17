/*
 * https://www.hackerrank.com/challenges/arrays-introduction?h_r=next-challenge&h_v=zen
 *
 * Introduction to arrays in c++ on hackerrank
 *
 * main.cpp
 *
 *  Created on: Oct 17, 2016
 *      Author: chris
 */
#include <iostream>

using namespace std;

int main(){

	int A_i[10000];

	int N;

	cin >> N;

	for(int i=0; i<N; i++)
		cin >> A_i[i];

	for(int i=N-1; i>=0; i--)
		cout << A_i[i] << " ";

	return 0;

}


