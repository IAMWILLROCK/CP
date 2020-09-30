#include "bits/stdc++.h"
using namespace std;

int dp[11][51];

int solve(int e, int f) {
	if (f == 1 || f == 0)
		return f;
	if (e == 1)
		return f;

	if (dp[e][f] != -1)
		return dp[e][f];
	int ans = INT_MAX;
	for (int i = 1; i <= f; i++) {
		int temp = max(solve(e - 1, i - 1), solve(e, f - i)) + 1;
		ans = min(temp, ans);
	}
	return dp[e][f] = ans;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	memset(dp, -1, sizeof(dp));
	int n, k;
	cin >> n >> k;
	cout << solve(n, k);
}