#include "bits/stdc++.h"
using namespace std;

int dp[501][501][2];

int solve(string s, int i, int j, bool isTrue) {
	if (i == j) {
		if (isTrue) return dp[i][j][isTrue] = (s[i] == 'T');
		else return dp[i][j][isTrue] = (s[i] == 'F');
	}
	if (dp[i][j][isTrue] != -1)
		return dp[i][j][isTrue];
	int ans = 0;
	for (int k = i + 1; k < j; k += 2) {
		int lt, lf, rt, rf;
		if (dp[i][k - 1][true] != -1)
			lt = dp[i][k - 1][true];
		else lt = solve(s, i, k - 1, true);

		if (dp[i][k - 1][false] != -1)
			lf = dp[i][k - 1][false];
		else lf = solve(s, i, k - 1, false);

		if (dp[k + 1][j][true] != -1) rt = dp[k + 1][j][true];
		else rt = solve(s, k + 1, j, true);

		if (dp[k + 1][j][false] != -1) rf = dp[k + 1][j][false];
		else rf = solve(s, k + 1, j, false);

		if (s[k] == '&')
			if (isTrue)
				ans += lt * rt;
			else
				ans += lf * rf + lf * rt + lt * rf;
		else if (s[k] == '^')
			if (isTrue)
				ans += lt * rf + lf * rt;
			else
				ans += lt * rt + lf * rf;
		else if (isTrue)
			ans += lt * rf + lf * rt + lt * rt;
		else
			ans += rf * lf;
	}
	dp[i][j][isTrue] = ans % 1003;
	return ans % 1003;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// memset(t, false,)
	// int n; cin >> n;
	string s; cin >> s;
	memset(dp, -1, sizeof(dp));
	cout << solve(s, 0, s.length() - 1, true);

}