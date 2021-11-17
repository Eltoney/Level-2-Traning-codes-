#include <bits/stdc++.h>

using namespace std;

#define el '\n'
#define sz(v) (int)(v.size())

int main() {
	int n, a, b;
	cin >> n;
	queue<int> q;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		if (a == 1) {
			q.push(b);
		} else {
			int cur = q.front();
			q.pop();
			cout << (cur == b ? "Yes\n" : "No\n");
		}
	}

	return 0;
}

