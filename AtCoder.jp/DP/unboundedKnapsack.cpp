#include "bits/stdc++.h"
using namespace std;

int unboundedKnapsack(int wt[], int val[], int n, int w) {
	// Recursive Solution
	/*
	if (n == 0 || w == 0)
		return 0;
	if (wt[n - 1] > w)
		return unboundedKnapsack(wt, val, n - 1, w);
	else
		return max(unboundedKnapsack(wt, val, n, w - wt[n - 1]) + val[n - 1], unboundedKnapsack(wt, val, n - 1, w));
	*/

	// Dp solution
	int dp[n + 1][w + 1];
	for (int i = 0; i < n + 1; i++)
		dp[i][0] = 0;
	for (int i = 0; i < w + 1; i++)
		dp[0][i] = 0;
	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < w + 1; j++) {
			if (wt[i - 1] > j)
				dp[i][j] = dp[i - 1][j];
			else
				dp[i][j] = max(dp[i][j - wt[i - 1]] + val[i - 1], dp[i - 1][j]);
		}
	}
	return dp[n][w];
}

int rodCutting(int rod, int n, int len[], int price[]) {
	// Recursive SOlution
	if (rod == 0 || n == 0)
		return 0;
	if (rod < 0) return INT_MIN;
	if (rod < len[n - 1])
		rodCutting(rod, n - 1, len, price);
	return max(rodCutting(rod - len[n - 1], n, len, price) + price[n - 1], rodCutting(rod, n - 1, len, price));

	// Dp solution
	int dp[n + 1];
	dp[0] = 0;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Unbounded Knapsack
	/*
	int n, w; cin >> n >> w;
	int wt[n], val[n];
	for (int i = 0; i < n; i++)
		cin >> val[i];
	for (int i = 0; i < n; i++)
		cin >> wt[i];
	cout << unboundedKnapsack(wt, val, n, w);
	*/

	// Maximising the rod cut
	int n; cin >> n;
	int len[n], price[n];
	for (int i = 0; i < n; i++)
		cin >> len[i];
	for (int i = 0; i < n; i++)
		cin >> price[i];
	cout << rodCutting(n, n, len, price);
}