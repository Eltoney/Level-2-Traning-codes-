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
	/*
	 * by observation each consecutive number has a difference of 1
	 * so if the n is even the answer is just number of 1 which is n / 2 obviously
	 * if n is odd then the answer will be the odd number - the difference of ones 
	 */
	int ans = n / 2;
	if (n % 2)
		ans = n - ans;
	cout << ans;
	return 0;
}

