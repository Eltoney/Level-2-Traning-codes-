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

using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		// t-- means move from t to zero , decrment one each time , so it stop
		//     when t = 0 because 0 is equivalent to false
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cout << n << " \n"[i == n - 1];
			// i == n-1 is true so it is equivalent to 1 so it takes the second
			// character from the string " \n" and prints new line

		}
	}

	return 0;
}

