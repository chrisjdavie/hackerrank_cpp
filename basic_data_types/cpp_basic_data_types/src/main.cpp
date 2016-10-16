/*
 * https://www.hackerrank.com/challenges/c-tutorial-basic-data-types
 *
 * Basic datatypes hackerrank challenge
 *
 * main.cpp
 *
 *  Created on: Oct 16, 2016
 *      Author: chris
 */
#include <iostream>
#include <cstdio>
using namespace std;

int main(){

	int i;
	long l;
	long long ll;
	char ch;
	float f;
	double d;

	scanf("%d %ld %lld %c %f %lf", &i, &l, &ll, &ch, &f, &d);
	printf("%d\n%ld\n%lld\n%c\n%f\n%lf", i, l, ll, ch, f, d);

	return 0;
}



