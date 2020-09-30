#include "bits/stdc++.h"
using namespace std;

int dp[501][501];

bool check(string s, int i, int j) {
	while (i < j) {
		if (s[i] != s[j])
			return false;
		i++; j--;
	}
	return true;
}

int solve(string s, int i, int j) {
	if (i == j)
		return 0;
	if (check(s, i, j)) {
		return 0;
	}
	// cout << s.substr(i, j - i + 1) << endl;
	if (dp[i][j] != -1)
		return dp[i][j];
	int ans = INT_MAX;
	for (int k = i; k < j; k++) {
		int temp = 0;
		temp = solve(s, i, k) + solve(s, k + 1, j) + 1;
		ans = min(temp, ans);
	}

	dp[i][j] = ans;
	return ans;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	memset(dp, -1, sizeof(dp));
	string s; cin >> s;
	cout << solve(s, 0, s.length() - 1);
	// cout << s;

}