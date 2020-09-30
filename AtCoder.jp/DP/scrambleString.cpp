#include "bits/stdc++.h"
using namespace std;

unordered_map<string, bool>m;

bool solve(string s1, string s2) {
	if (s1.length() != s2.length()) {
		m[s1 + s2] = false;
		return false;
	}
	if (s1.length() == 0 && s2.length() == 0) {
		m[s1 + s2] = true;
		return true;
	}
	if (s1 == s2) {
		m[s1 + s2] = true;
		return true;
	}
	if (m.find(s1 + s2) != m.end())
		return m[s1 + s2];
	int n = s1.length();
	for (int i = 1; i <= n - 1; i++) {
		//Swapping happended
		// cout << "i: " << i << " " << "n-i: " << n - i << endl;
		// cout << s1.substr(0, i) << " " << s2.substr(n - i, i) << " | " << s1.substr(i, n - i) << " " << s2.substr(0, i) << endl;
		// cout<<
		cout << s1.substr(0, i) << " " << s2.substr(n - i, i) << " | " << s1.substr(i, n - i) << " " << s2.substr(0, i) << endl;
		cout << s1.substr(0, i) << " " << s2.substr(0, i) << " | " << s1.substr(i, n - i) << " " << s2.substr(i, n - i) << endl;

		if (solve(s1.substr(0, i), s2.substr(n - i, i)) && solve(s1.substr(i, n - i), s2.substr(0, n - i))) {
			cout << s1.substr(0, i) << " " << s2.substr(n - i, i) << " | " << s1.substr(i, n - i) << " " << s2.substr(0, i) << endl;
			m[s1 + s2] = true;
			return true;
		}

		//Swapping did not happen
		if (solve(s1.substr(0, i), s2.substr(0, i)) && solve(s1.substr(i, n - i), s2.substr(i, n - i))) {
			cout << s1.substr(0, i) << " " << s2.substr(0, i) << " | " << s1.substr(i, n - i) << " " << s2.substr(i, n - i) << endl;
			m[s1 + s2] = true;
			return true;
		}
	}
	m[s1 + s2] = false;
	return false;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	m.clear();
	string s1, s2;
	cin >> s1 >> s2;
	bool t = solve(s1, s2);
	if (t) cout << "YES";
	else cout << "NO";
}