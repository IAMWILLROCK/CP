#include<bits/stdc++.h>
using namespace std;

int solve(int N, int K) {
	if (N == 1)
		return 0;
	int ans = solve(N - 1, ceil(K / 2.0));
	cout << "N: " << N << " ans: " << ans << " K: " << K << endl;
	if (ans == 1) {
		if (K % 2 == 1)
			return 1;
		else
			return 0;
	} else {
		if (K % 2 == 1)
			return 0;
		else
			return 1;
	}
}

int main() {
	int N, K;
	N = 3, K = 3;
	cout << solve(N, K);
	// cout << endl << ceil(3 / 2);
}