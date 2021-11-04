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
	string a, b;
	vector<int> ans;
	cin >> a >> b;
	int i = sz(a) - 1, j = sz(b) - 1;
	int carry = 0;
	while (i >= 0 || j >= 0) {
		int x = 0, y = 0;
		if (i >= 0)
			x = a[i] - '0';
		if (j >= 0)
			y = b[j] - '0';
		int cur = x + y + carry;
		ans.push_back(cur % 10);
		carry = cur / 10;
		i--, j--;
	}
	if (carry)
		ans.push_back(carry);
	reverse(ans.begin(), ans.end());
	for (auto x : ans) {
		cout << x;
	}
	return 0;
}

