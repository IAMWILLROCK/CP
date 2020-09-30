#include "bits/stdc++.h"
using namespace std;

bool helper(int a[], int n, int sum) {
	bool dp[n + 1][sum + 1];
	for (int i = 0; i < sum + 1; i++)
		dp[0][i] = false;
	for (int i = 0; i < n + 1; i++)
		dp[i][0] = true;
	for (int i = 1; i < n + 1; i++)
		for (int s = 1; s < sum + 1; s++)
			if (a[i - 1] > s)
				dp[i][s] = dp[i - 1][s];
			else
				dp[i][s] = dp[i - 1][s] || dp[i - 1][s - a[i - 1]];
	return dp[n][sum];
}

void helper2(int a[], int n, int sum, int &ans) {
	if (sum == 0) {
		ans++;
		return;
	}
	if (n == 0) {
		return;
	}
	if (a[n - 1] > sum)
		helper2(a, n - 1, sum, ans);
	else {
		helper2(a, n - 1, sum, ans);
		helper2(a, n - 1, sum - a[n - 1], ans);
	}
}

int dpsolution(int a[], int n, int sum) {
	int dp[n + 1][sum + 1];
	memset(dp, 0, sizeof(dp));
	for (int i = 0; i < sum + 1; i++)
		dp[0][i] = 0;
	for (int i = 0; i < n + 1; i++)
		dp[i][0] = 1;
	for (int i = 1; i < n + 1; i++) {
		for (int s = 1; s < sum + 1; s++) {
			if (a[i - 1] > s)
				dp[i][s] = dp[i - 1][s];
			else
				dp[i][s] += dp[i - 1][s - a[i - 1]] + dp[i - 1][s];
		}
	}
	for (int i = 0; i < n + 1; i++) {
		for (int j = 0; j < sum + 1; j++) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	return dp[n][sum];
}

bool solve(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	if (sum % 2 == 0) {
		return helper(a, n, sum / 2);
	}
	return false;
}

void helperGenerateParanthesis(int n, int open, int close, string op) {
	if (n == 0) {
		if (open == 3 && close == 3) cout << op << endl;
		return;
	}
	// cout << n / 2 << " ";

	if (open > close) {
		helperGenerateParanthesis(n - 1, open, close + 1, op + ')');
		helperGenerateParanthesis(n - 1, open + 1, close, op + '(');
	} else {
		helperGenerateParanthesis(n - 1, open + 1, close, op + '(');
		// helperGenerateParanthesis(n - 1, open, close + 1, op + ')');
	}
}

void generateParanthesis(int n) {
	string op;
	return helperGenerateParanthesis(2 * n, 0, 0, op);
}

int subsetSumDifferenceHelper(int a[], int n, int sum) {
	bool dp[n + 1][sum + 1];
	for (int i = 0; i < sum + 1; i++)
		dp[0][i] = false;
	for (int i = 0; i < n + 1; i++)
		dp[i][0] = true;
	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < sum + 1; j++) {
			if (a[i - 1] > j)
				dp[i][j] = dp[i - 1][j];
			else
				dp[i][j] = dp[i - 1][j] || dp[i - 1][j - a[i - 1]];
		}
	}
	int ans = INT_MAX;
	for (int i = 0; i <= ceil(sum / 2); i++) {
		if (dp[n + 1][i]) {
			ans = min(ans, abs(sum - 2 * i));
		}
	}
	return ans;
}

int subsetSumDifference(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return subsetSumDifferenceHelper(a, n, sum);
}

bool subsetSum(int a[], int n, int sum) {
	/*
	if (sum == 0)
		return true;
	if (n == 0)
		return false;

	if (a[n - 1] > sum)
		return subsetSum(a, n - 1, sum);
	else
		return (subsetSum(a, n - 1, sum) || subsetSum(a, n - 1, sum - a[n - 1]));
	*/

	// DP solution
	bool dp[n + 1][sum + 1];
	for (int i = 0; i < sum + 1; i++) {
		dp[0][i] = false;
	}
	for (int i = 0; i < n + 1; i++)
		dp[i][0] = true;
	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < sum + 1; j++) {
			if (a[i - 1] > j)
				dp[i][j] = dp[i - 1][j];
			else
				dp[i][j] = dp[i - 1][j] || dp[i - 1][j - a[i - 1]];
		}
	}
	return dp[n][sum];
}

int subsetSumCount(int a[], int n, int sum) {
	// Recursive solution
	/*
	if (sum == 0)
		return 1;
	if (n == 0)
		return 0;
	if (a[n - 1] > sum)
		return subsetSumCount(a, n - 1, sum);
	else
		return subsetSumCount(a, n - 1, sum) + subsetSumCount(a, n - 1, sum - a[n - 1]);
	*/

	// Dp solution
	int dp[n + 1][sum + 1];
	memset(dp, 0, sizeof(dp));
	for (int i = 0; i < sum + 1; i++)
		dp[0][i] = 0;
	for (int i = 0; i < n + 1; i++)
		dp[i][0] = 1;
	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < sum + 1; j++) {
			if (a[i - 1] > j)
				dp[i][j] = dp[i - 1][j];
			else
				dp[i][j] += dp[i - 1][j] + dp[i - 1][j - a[i - 1]];
		}
	}
	return dp[n][sum];
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	/*
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int sum; cin >> sum;
	// bool t = solve(a, n);
	// if (t)
	// 	cout << "True";
	// else
	// 	cout << "No";
	cout << dpsolution(a, n, sum);
	*/

	// generateParanthesis
	/*
	int n; cin >> n;
	generateParanthesis(n);
	*/

	// Subset sum difference
	/*
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << subsetSumDifference(a, n);
	*/

	// Subset Problem
	/*
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int sum; cin >> sum;
	bool t = subsetSum(a, n, sum);
	if (t) cout << "YES";
	else cout << "NO";
	*/

	// Count the subsets with a given sum
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int sum; cin >> sum;
	cout << subsetSumCount(a, n, sum);

}

