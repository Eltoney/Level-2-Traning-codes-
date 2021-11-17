#include <bits/stdc++.h>

using namespace std;

#define el '\n'
#define sz(v) (int)(v.size())

int main() {
	int n;
	cin >> n;
	map<string, int> mp;
	string str;
	for (int i = 0; i < n; ++i) {
		cin >> str;
		if (mp[str]) {
			cout << str << mp[str] << el;
		} else {
			cout << "OK\n";
		}
		mp[str]++;
	}

	return 0;
}

