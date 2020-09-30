#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;

int knapSack(int W, int wt[], int val[], int n)
{
	int i, w;
	int K[n + 1][W + 1];

	// Build table K[][] in bottom up manner
	for (i = 0; i <= n; i++) {
		for (w = 0; w <= W; w++) {
			if (i == 0 || w == 0)
				K[i][w] = 0;
			else if (wt[i - 1] <= w)
				K[i][w] = max(
				              val[i - 1] + K[i - 1][w - wt[i - 1]],
				              K[i - 1][w]);
			else
				K[i][w] = K[i - 1][w];
		}
	}

	return K[n][W];
}
int main() {
	//code
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n, w;
	cin >> n;
	cin >> w;
	int wt[n], val[n];
	// cout << n << " " << w << endl << endl;
	for (ll i = 0; i < n; i++) {
		cin >> wt[i] >> val[i];
	}

	cout << knapSack(w, wt, val, n);
	// cout << knapsack(wt, val, w, n);
	return 0;
}