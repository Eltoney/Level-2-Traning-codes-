#include <bits/stdc++.h>

using namespace std;

#define el '\n'
#define sz(v) (int)(v.size())

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	if (k == 0) {
		cout << (v[0] == 1 ? -1 : 1);
	} else if (k == n) {
		cout << v[n - 1];
	} else {
		int cur = v[k] - 1;
		cout << (cur >= v[k - 1] ? cur : -1);
	}

	return 0;
}

