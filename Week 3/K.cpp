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

	int n;
	cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	reverse(v.begin(), v.end());
	set<string> st;
	for (auto chat : v) {
		if (st.find(chat) == st.end()) {
			cout << chat << el;
			st.insert(chat);
		}
	}

	return 0;
}


