#include "bits/stdc++.h"
using namespace std;

char a[1002][1002];
int dp[1002][1002];

const long long INF = 1e9 + 7;

int solve(int i, int j, int n, int h) {
	if (i == n && j == h)
		return 1;
	if (i > n || j > h)
		return 0;
	if (dp[i][j] != -1)
		return dp[i][j];
	int ans = 0;
	if (i + 1 <= n && a[i + 1][j] != '#') {
		// cout << "looking at i+1, j " << i + 1 << ", " << j << " | " << a[i + 1][j] << endl;
		ans += solve(i + 1, j, n, h);
	}
	if (j + 1 <= h && a[i][j + 1] != '#') {
		// cout << "looking at i, j+1" << i << ", " << j + 1 << " | " << a[i + 1][j] << endl;
		ans += solve(i, j + 1, n, h);
	}
	return dp[i][j] = ans % INF;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	memset(dp, -1, sizeof(dp));
	int n, h; cin >> n >> h;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < h; j++)
			cin >> a[i][j];

	cout << solve(0, 0, n - 1, h - 1);
}