#include <bits/stdc++.h>

using namespace std;

#define el '\n'
#define sz(v) (int)(v.size())
#define ll long long

int main() {
//	freopen("input.in", "rt", stdin);

// sz = 5 , arr = 1 , 2 , 3 , 4 , 5
	/*
	 *   qur i = 0 , j = 2 ans = 6
	 *   qur i = 0 , j = 5 ans = 15
	 *   qur i = 5 , j = 5 ans = 5
	 */

	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	vector<int> cum(n);
	cum[0] = v[0];
	for (int i = 1; i < n; i++) {
		cum[i] = v[i] + cum[i - 1];
	}
	int q;
	cin >> q;
	while (q--) {
		int i, j;
		cin >> i >> j;
//		ll ans = cum[j] - cum[i - 1];  RTE

//		ll ans = cum[j];  simple handle
//		if(i != 0){
//			ans -= cum[i - 1];
//		}

		ll ans = (i == 0 ? cum[j] : cum[j] - cum[i - 1]);
		cout << ans << el;

//		for (int k = i; k <= j; ++k) {
//			ans += v[k];
//		}
//		i = 0 , j = 1e5   n = 1e5;
//		q = 1e4;
//		O(n * q) => 1e9
		// O(n + q) => O(1e5 + 1e4)
		/*
		 *
		 *  1 2 3 4  5
		 *  1 3 6 10 15 cum/prefix array
		 *  i = 0 , j = 4   cum[j]
		 *
		 *  i = 0 , j = 3   cum[3] O(1) instead of O(n)
		 *  i = 0 , j = n  cum[n]
		 *  i = 1 , j = 2  cum[2] - cum[0]
		 *  i = 2 , j = 4  cum[4] - cum[1]
		 * quer i , j =>  cum[j] - cum[i - 1]
		 *
		 */
	}

	return 0;
}

