/*
 * main.cpp
 *
 *  Created on: Nov 6, 2016
 *      Author: chris
 */
#define foreach(v, i) for(int i=0; i<n; i++)
#define INF 10000000
#define FUNCTION(name, the_operator) void name (int &a, int &b) { int result; if ( a the_operator b ) result = a; if ( b the_operator a ) result = b; a = result;  }
#define io(v) cin >> v
#define toStr(x) #x


#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}
