#include <bits/stdc++.h>

using namespace std;

#define el '\n'
#define sz(v) (int)(v.size())

int main() {
	string str;
	cin >> str;
	stack<char> st;
	int ans = 0;
	for (int i = 0; i < sz(str); ++i) {
		if (str[i] == '(') {
			st.push('(');
		} else {
			if (!st.empty()) {
				st.pop();
				ans += 2;
			}
		}
	}
	cout << ans << el;

	return 0;
}
