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

using namespace std;
int main() {
	int n, y, ans = 0;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> y;
	for (int i = 0; i < n; i++) {
		if ((arr[i] + y) % 3 == 0) {
			ans++;
		}
	}
	cout << ans << el;
	return 0;
}

