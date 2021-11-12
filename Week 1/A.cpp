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

	ll a, b, k;
	cin >> a >> b >> k;

	ll st = a, ed = b, mid, cnt = 0;

	while (st <= ed) {
		mid = (st + ed) / 2;
		cnt++;
		if (mid == k) {
			break;
		} else if (mid < k) {
			st = mid + 1;
		} else {
			ed = mid - 1;
		}
	}
	cout << cnt << el;

	return 0;
}


