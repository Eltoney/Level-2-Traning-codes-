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

int b, s, c, nb, ns, nc, pb, ps, pc;
ll r;
bool can(ll mid) {
	ll needb = b * mid;
	ll needs = s * mid;
	ll needc = c * mid;
	needb = max(0LL, needb - nb);
	needs = max(0LL, needs - ns);
	needc = max(0LL, needc - nc);
	return (needb * pb + needs * ps + needc * pc <= r);
}

int main() {
	string str;
	cin >> str;
	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;
	cin >> r;

	for (int i = 0; i < sz(str); ++i) {
		(str[i] == 'B' ? b++ : (str[i] == 'S' ? s++ : c++));
	}
	ll st = 0, ed = 1e13, mid, ans;
	while (st <= ed) {
		mid = (st + ed) / 2;
		if (can(mid)) {
			ans = mid;
			st = mid + 1;
		} else {
			ed = mid - 1;
		}
	}
	cout << ans << el;

	return 0;
}


