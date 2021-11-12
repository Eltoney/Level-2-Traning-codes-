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

bool can(int mid, int c, int m, int x) {
	return (c >= mid && m >= mid && (x + c - mid + m - mid) >= mid);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int c, m, x;
		cin >> c >> m >> x;

		int lo = 0, hi = 1e8, mid, ans;
		while (lo <= hi) {
			mid = (lo + hi) / 2;
			if (can(mid, c, m, x)) {
				lo = mid + 1;
				ans = mid;
//				ans = max(ans , mid);
			} else {
				hi = mid - 1;
			}

		}
		cout << ans << el;
	}

	return 0;
}
 
