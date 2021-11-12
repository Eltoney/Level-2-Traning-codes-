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
//	freopen("input.in", "rt", stdin);
	/*
	 * 1
	 * 2 3
	 * 4 5 6
	 * 7 8 9 10
	 * 11 12 13 14
	 * 15 16 17 18 19
	 *
	 */
	/*
	 *
	 * sum(1)  = 1
	 * sum(1 to 2) = 3
	 * sum(1 to 3) = 6
	 * sum(1 to 4) = 10
	 *
	 *
	 * sum(mid)   sum(mid - 1)
	 */
	/*sum(last block in the row)
	 *
	 * 1
	 * 3 6
	 * 10 15 21
	 * 28 36 45  55
	 * sum(4)
	 */

	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;

		ll st = 0, ed = 1414213562, mid, ans;
		while (st <= ed) {
			mid = (st + ed) / 2;
			ll cur = sum(mid);
			ll pre = sum(mid - 1);
			if (pre < n && cur >= n) {
				// valid
				ans = mid;
				break;
			} else if (cur < n) {
				//small
				st = mid + 1;
			} else {
				ed = mid - 1;
			}
		}
		cout << ans << el;
	}

	return 0;
}


