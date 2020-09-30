#include "bits/stdc++.h"
using namespace std;

double dp[3001][3001];

double solve(double a[], int n, int heads) {
	if (n == 0) {
		if (heads == 0)
			return 1;
		else return 0;
	}
	if (dp[n][heads] != DBL_MIN)
		return dp[n][heads];
	return dp[n][heads] = a[n - 1] * solve(a, n - 1, heads - 1) + (1 - a[n - 1]) * solve(a, n - 1, heads);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	// cout << DBL_MIN << endl;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			dp[i][j] = DBL_MIN;
			// cout << dp[i][j] << " ";
		}
		// cout << endl;
	}
	double a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	double ans = 0;
	for (int heads = 0; heads <= n; heads++) {
		if (heads > n - heads)
			ans += solve(a, n, heads);
	}
	cout << ans;
}