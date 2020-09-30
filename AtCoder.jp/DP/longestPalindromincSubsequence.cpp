#include "bits/stdc++.h"
using namespace std;

int solve(string s1, string s2, int i, int j) {
	if (i == 0 || j == 0)
		return 0;
	if (s1[i] == s2[j])
		return 1 + solve(s1, s2, i - 1, j - 1);
	else
		return max(solve(s1, s2, i, j - 1), solve(s1, s2, i - 1, j));
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s; cin >> s;
	cout << solve(s, s, s.length(), s.length());
}