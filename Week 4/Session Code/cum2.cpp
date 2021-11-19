#include <bits/stdc++.h>

using namespace std;

#define el '\n'
#define sz(v) (int)(v.size())
#define ll long long

int main() {
	freopen("input.in", "rt", stdin);

	int n;
	cin >> n;
	vector<int> v(n + 1), u(n + 1);

	for (int i = 1; i <= n; ++i) {
		cin >> v[i];
		u[i] = v[i];
	}
	sort(u.begin(), u.end());
	vector<ll> cumU(n + 1), cumV(n + 1);
	for (int i = 1; i <= n; i++) {
		cumU[i] = cumU[i - 1] + u[i];
		cumV[i] = cumV[i - 1] + v[i];
	}
	int m;
	cin >> m;
	while (m--) {
		int type, l, r;
		ll ans = 0;
		cin >> type >> l >> r;
		if (type == 1) {
			ans = cumV[r] - cumV[l - 1];
		} else {
			ans = cumU[r] - cumU[l - 1];
		}
		cout << ans << el;
	}

	return 0;
}

