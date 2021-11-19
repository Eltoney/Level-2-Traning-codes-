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
	cout << fixed << setprecision(4);
	double a, b;
	cin >> a >> b;
	double r = (sqrt(a * a + b * b)) / 2;
	double area = 3.14159 * r * r;
	cout << area / 2;
	return 0;
}

