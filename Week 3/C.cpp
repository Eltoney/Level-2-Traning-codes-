#include <bits/stdc++.h>

using namespace std;

#define el '\n'
#define sz(v) (int)(v.size())

int colorCost(string wall, string pattern) {
	int ans = 0;
	int n = sz(wall);
	for (int i = 0; i < n; i++) {
		if (wall[i] != pattern[i % 3]) {
			ans++;
		}
	}
	return ans;
	/*
	 * since it is only 3 letters the mod of postion in the big string
	 * will give us the postion in pattern string
	 * we could also build the string first then compre
	 */
}

int main() {
	vector<string> valid = { "RGB", "RBG", "BGR", "BRG", "GRB", "GBR" };
	int n;
	string str, color;
	cin >> n >> str;
	int ans = n + 1;
	for (int i = 0; i < 6; i++) {
		int cur = colorCost(str, valid[i]);
		if (cur < ans) {
			color = valid[i];
			ans = cur;
		}
	}
	cout << ans << el;
	for (int i = 0; i < n; i++) {
		cout << color[i % 3];
	}
	/*
	 * the solution idea is to try every each
	 * possible pattern and select the one
	 * with minmal cost
	 * another solution link: https://ideone.com/Se8HCF
	 */

	return 0;
}
