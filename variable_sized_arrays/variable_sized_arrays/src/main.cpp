/*
 * main.cpp
 *
 *  Created on: Oct 9, 2016
 *      Author: chris
 */
#include <iostream>

using namespace std;


int main() {
	int n, q;

	cin >> n >> q;

	int sizes[n];
	int **array = new int*[n];

	for (int i = 0; i < n; i++){
		cin >> sizes[i];
		array[i] = new int[sizes[i]];
		for (int j = 0; j < sizes[i]; j++){
			int a;
			cin >> a;
			cout << a << endl;
		}
	}

	for(int i=0; i < n; i++){
		delete [] array[i];
	}

	delete [] array;

	cout << n << q;


}
