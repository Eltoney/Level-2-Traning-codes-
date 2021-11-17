#include <bits/stdc++.h>

using namespace std;

#define el '\n'
#define sz(v) (int)(v.size())

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		deque<int> dq;
		dq.push_back(n);
		for (int i = n - 1; i >= 1; i--) {
			dq.push_front(dq.back());
			dq.pop_back();
			dq.push_front(i);
		}
		for (int i = 0; i < n; i++)
			cout << dq[i] << " \n"[i == n - 1];
	}

	return 0;
}

