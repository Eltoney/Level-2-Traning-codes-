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

ll sum(ll n) {
	return (n + 1) / 2.0 * n;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;

		ll st = 0, ed = 1414213562, mid, ans;
		while (st <= ed) {
			mid = (st + ed) / 2;
			ll lft = sum(mid);
			ll rgt = sum(mid - 1);
			if (lft >= n && rgt < n) {
				ans = mid;
				break;
			} else if (lft > n) {
				ed = mid - 1;
			} else {
				st = mid + 1;
			}
		}
		cout << ans << el;
	}

	return 0;
}


