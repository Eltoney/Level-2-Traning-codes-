#include <bits/stdc++.h>

using namespace std;

#define el '\n'
#define sz(v) (int)(v.size())

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	deque<int> shelf;
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
		shelf.push_back(v[i]);
	}

	priority_queue<int> books;
	int q;
	cin >> q;
	while (q--) {
		char qur;
		cin >> qur;
		if (qur == 'Q') {
			if (books.empty()) {
				cout << -1 << el;
			} else {
				cout << books.top() << el;
				books.pop();
			}
		} else {
			if (!shelf.empty()) {
				if (qur == 'L') {
					int cur = shelf.front();
					shelf.pop_front();
					books.push(cur);
				} else {
					int cur = shelf.back();
					shelf.pop_back();
					books.push(cur);
				}
			}
		}

	}
	return 0;
}

