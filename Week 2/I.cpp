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

	int n, mn = 1e9 + 1, mx = 0;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
		if (v[i] < mn) {
			mn = v[i];
		}
		if (v[i] > mx) {
			mx = v[i];
		}
	}
	bool lstIsMn = 1;
	int mnId = 2e6, mxId = 2e6, ans = 1e6;
	for (int i = 0; i < n; i++) {
		if (v[i] == mn) {
			mnId = i;
			if (!lstIsMn) {
				ans = min(ans, abs(mnId - mxId));
			}
			lstIsMn = 1;
		} else if (v[i] == mx) {
			mxId = i;
			if (lstIsMn) {
				ans = min(ans, abs(mnId - mxId));
			}
			lstIsMn = 0;
		}
	}
	cout << (ans == 1e6 ? 0 : ans) << el;

	return 0;
}


