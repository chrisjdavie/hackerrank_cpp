/*
 * main.cpp
 *
 *  Created on: Nov 6, 2016
 *      Author: chris
 */
#define foreach(list, index) for(int index=0; index<list.size(); index++)
#define INF 1e9
#define FUNCTION(name, the_operator) void name (int &a, int b) { if ( b the_operator a ) a = b;}
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
