#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t, n, a, b, x;
	cin >> t;
	while (t--) {
		cin >> n >> x >> a >> b;
		int r1, r2;

		r1 = x + abs(a - b);

		r2 = min(r1, n - 1);

		cout << r2 << endl;
	}

}