#include "bits/stdc++.h"
using namespace std;

bool solve(int a[], int n, int sum) {
	if (sum == 0)
		return true;
	if (n == 0) {
		return false;
	}
	if (a[n - 1] > sum)
		return solve(a, n - 1, sum);
	else
		return (solve(a, n - 1, sum) || solve(a, n - 1, sum - a[n - 1]));
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int sum; cin >> sum;
	bool t = solve(a, n, sum);
	if (t)
		cout << "YEs";
	else
		cout << "no";
}