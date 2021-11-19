#include <bits/stdc++.h>

using namespace std;

#define el '\n'
#define sz(v) (int)(v.size())

int main() {
	freopen("input.in", "rt", stdin);

	/*
	 *
	 * string has x charcters
	 * can string be used to make palindrome ?
	 *  yes / no
	 *  aaaabb   aabbaa  or abaaba  or baaaab
	 *  aaabb    ababa or baaab  no pal with even size
	 *  aaabbb   no
	 *  count all number of each charcter
	 *  + check no more than 1 char has odd occurence
	 *
	 */
	// freq arr using vector
//	string str;
//	cin >> str;
//	int n = sz(str);
//	vector<int> freq(26);
//	for (int i = 0; i < n; i++) {
//		freq[str[i] - 'a']++;   // O(1)
//	}
//	int oddCnt = 0;
//	for (int i = 0; i < 26; i++) {
//		oddCnt += (freq[i] % 2);
//	}
//	cout << (oddCnt > 1 ? "NO" : "YES");


// freq arr using map
//	string str;
//	cin >> str;
//	int n = sz(str);
//	map<char, int> mp;
//	for (int i = 0; i < n; ++i) {
//		mp[str[i]]++;  // O(log(n))
//	}
//	int oddCnt = 0;
//	for (auto pr : mp) {
//		oddCnt += (pr % 2);
//	}
//	cout<<(oddCnt > 1 ? "NO" : "YES");

	/*
	 * query    x  ans => number of occuernce of x
	 *
	 * arr  => 1 2 2 5 6 7
	 * query x = 2   ans = 2
	 * x = 1 ans = 1
	 * x = 10 ans = 0
	 * compx : n * q
	 */
	// length arr max = 1e5 , numbers mx = 1e9


	//map
	/*
	 * //checl if the string is palindorme
	 /*	 */
//	bool isPal = 1;
//	string str;
//	cin >> str;
//	int i = 0, j = sz(str) - 1;
//	while (i < j) {
//		isPal &= (str[i++] == str[j--]);
////		if (!isPal) {
////			break;
////		}
//		/*
//		 * 1 and 1   1
//		 * 1 and 0   0
//		 */
////		if (str[i] != str[j]) {
////			isPal = false;
////		}
////		i++, j--;
//	}
//	cout << (isPal ? "YES" : "NO");
//	 */
	return 0;
}

