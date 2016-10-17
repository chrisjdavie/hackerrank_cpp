/*
 * https://www.hackerrank.com/challenges/c-tutorial-functions
 *
 * Hackerrank c++ tutorial functions
 *
 * (tutorials will cover arrays soon I'm sure...)
 *
 * main.cpp
 *
 *  Created on: Oct 17, 2016
 *      Author: chris
 */
#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;

int max_of_four(int a, int b, int c, int d){

	int max = INT_MIN;

	if (a > max)
		max = a;
	if (b > max)
		max = b;
	if (c > max)
	    max = c;
	if (d > max)
	    max = d;

	return max;
}

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}


