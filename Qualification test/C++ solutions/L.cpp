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

bool isPrime(int n) {
	for (int i = 2; (ll) i * i <= n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

using namespace std;

int main() {
	vector<int> cum(1e5 + 9, 0);
	cum[1] = 1;
	for (int i = 2; i < 1e5; i++) {
		if (isPrime(i)) {
			ll cur = i;
			while (cur < 1e5) {
				cum[cur]++;
				cur *= i;
			}
		}
	}
	for (int i = 1; i <= 1e5; i++) {
		cum[i] += cum[i - 1];
	}
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		cout << cum[b] - cum[--a] << el;
	}

	return 0;
}

