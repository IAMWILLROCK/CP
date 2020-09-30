#include "bits/stdc++.h"
using namespace std;

int dp[1001][1001];


int solve(int a[], int i, int j) {
	if (i >= j)
		return 0;
	if (dp[i][j] != -1)
		return dp[i][j];
	int ans = INT_MAX;
	for (int k = i; k < j; k++) {
		int temp = solve(a, i, k) + solve(a, k + 1, j) + a[i - 1] * a[k] * a[j];
		if (temp < ans) ans = temp;
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
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << solve(a, 1, n - 1);
}