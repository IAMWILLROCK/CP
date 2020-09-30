#include "bits/stdc++.h"
using namespace std;

int helper(int a[], int n, int curr, int sum) {
	if (n == 0) {
		if (curr == sum)
			return 1;
		return 0;
	}

	return helper(a, n - 1, curr + a[n - 1], sum) + helper(a, n - 1, curr - a[n - 1], sum);
}

int solve(int a[], int n, int s) {
	return helper(a, n, 0, s);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int s;
	cin >> s;
	cout << solve(a, n, s);
}