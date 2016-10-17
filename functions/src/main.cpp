/*
 * https://www.hackerrank.com/challenges/c-tutorial-functions
 *
 * Hackerrank c++ tutorial functions
 *
 * (tutorials will cover arrays soon I'm sure...)
 *
 * Turns out there's a "max" in c++
 *
 * main.cpp
 *
 *  Created on: Oct 17, 2016
 *      Author: chris
 */
#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
	return max(max(a,b),max(c,d));
}

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}


