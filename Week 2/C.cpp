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

	int n, q;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	cin >> q;
	while (q--) {
		int k;
		cin >> k;
		auto it = upper_bound(arr, arr + n, k) - arr;
		cout << it << el;
	}

	return 0;
}


