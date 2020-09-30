#include <iostream>
using namespace std;

int dp[1003][1003];

int knapsack(int wt[], int val[], int w, int n) {
	// cout << n << endl;
	if (n == 0 || w <= 0) {
		return 0;
	}
	// cout << "comparing the weights wt[0]:" << wt[0] << " w:" << w << endl;
	int ans = 0;
	if (wt[0] > w) {
		// cout << wt[0] << endl;
		ans = knapsack(wt + 1, val + 1, w, n - 1);
		dp[w][n]
	}
	else return max(knapsack(wt + 1, val + 1, w - wt[0], n - 1) + val[0], knapsack(wt + 1, val + 1, w, n - 1));
}

int main() {
	//code
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int w;
		cin >> w;
		int wt[n], val[n];
		// cout << n << " " << w << endl << endl;
		memset(dp, 0, sizeof(dp));
		for (int i = 0; i < n; i++) {
			cin >> val[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> wt[i];
		}
		cout << knapsack(wt, val, w, n) << endl;
	}
	return 0;
}