#include<bits/stdc++.h>
using namespace std;

long long tiredness(long long n) {
	return n * (n + 1) / 2;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a, b;
	cin >> a >> b;

	int x1, x2;
	bool flag = a > b;
	if (!flag) {
		x1 = a; x2 = b;
	} else {
		x1 = b; x2 = a;
	}
	// cout << x1 << " " << x2;
	int t1 = x1 + (x2 - x1 + 1) / 2;
	int t2 = x2 - (x2 - x1) / 2;
	long long ans = 0;
	ans = tiredness(t1 - x1) + tiredness(x2 - t2);
	cout << ans;
}