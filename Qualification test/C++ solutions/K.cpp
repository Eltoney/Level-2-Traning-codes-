//============================================================================
// Name        : sessions.cpp
// Author      : Ali Ahmed Eltoney
// Version     :
// Copyright   : try to understand not copy the code
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>

#define el '\n'
#define ll long long
#define sz(v) (int)(v.size())

using namespace std;
int main() {
	int n;
	cin >> n;
	if (n <= 1) {
		cout << 1;
	} else if (n == 2) {
		cout << 2;
	} else if (n == 3) {
		cout << 6;
	} else if (n == 4) {
		cout << 4;
	} else {
		cout << 0;
	}
	return 0;
}

