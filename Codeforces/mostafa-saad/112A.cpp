#include<bits/stdc++.h>
using namespace std;

int score(char c) {
	if (c >= 'a' && c <= 'z') {
		return c - 'a' + 1;
	} else
		return c - 'A' + 1;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s1, s2;
	cin >> s1 >> s2;
	int a, b;
	a = b = 0;
	for (int i = 0; i < s1.length(); ++i)
	{
		/* code */
		char c1, c2;
		c1 = s1[i]; c2 = s2[i];
		a += score(c1); b += score(c2);
		if (a > b) {
			cout << 1;
			break;
		} else if (a < b) {
			cout << -1;
			break;

		}
	}
	if (a == b)
		cout << 0;
}