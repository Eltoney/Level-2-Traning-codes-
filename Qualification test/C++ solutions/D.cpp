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
		int n, x, y;
		cin >> n >> x >> y;
		for (int i = n; i > 0; i--) {
			if ((i % x == 0 || i % y == 0) && !(i % x == 0 && i % y == 0)) {
				// he said EXACTLY ONE of them so
				// simply we can (or and (not and)) to get the result
				/*
				 * when the number divisible by both of them the second term will be zero so it will fail
				 * when divisible by only one of them the both terms evaluate to 1
				 */
				cout << i << " ";
			}
		}
		cout << el;
	}

	return 0;
}

