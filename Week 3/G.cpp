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
//	freopen("input.in", "rt", stdin);
	int cur = 1;
	int n;
	cin >> n;
	vector<int> outCar(n);
	for (int i = 0; i < n; ++i) {
		cin >> outCar[i];
	}
	stack<int> st;
	int j = 0;
	while (cur <= n) {
		while (!st.empty() && st.top() == outCar[j]) {
			st.pop();
			j++;
		}
		if (cur <= n) {
			st.push(cur++);
		}
	}
	while (!st.empty() && st.top() == outCar[j]) {
		st.pop();
		j++;
	}
	cout << (st.empty() ? "YES\n" : "NO\n");

	return 0;
}


