#include <bits/stdc++.h>

using namespace std;

#define el '\n'
#define sz(v) (int)(v.size())

int main() {
	string str, cur;
	cin >> str;
	map<string, int> mp;
	for (int i = 0; i < 10; i++) {
		cin >> cur;
		mp[cur] = i;
	}
	for (int i = 0; i < sz(str); i += 10) {
		cur = "";
		for (int j = i; j < i + 10; j++) {
			cur += str[j];
		}
		cout << mp[cur];
	}

	return 0;
}

