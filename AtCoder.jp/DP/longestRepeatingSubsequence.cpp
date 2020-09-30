#include "bits/stdc++.h"
using namespace std;

int solve(string s, int n) {
	string s1 = s;
	int dp[n + 1][n + 1];
	memset(dp, 0, sizeof(dp));
	for (int i = 0; i < n + 1; i++) {
		for (int j = 0; j < n + 1; j++) {
			// cout << s[i] << " " << s[j] << endl;
			if (i == 0 || j == 0)
				dp[i][j] = 0;
			else if (s[i - 1] == s1[j - 1] && i != j) {
				// cout << s[i] << " " << s1[j] << endl;
				dp[i][j] = 1 + dp[i - 1][j - 1];

			} else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}

	// for (int i = 0; i < n + 1; i++) {
	// 	for (int j = 0; j < n + 1; j++) {
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	return dp[n][n];
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s; cin >> s;
	cout << solve(s, s.length());
}