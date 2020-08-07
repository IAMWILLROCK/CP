#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t, n, d;
	cin >> t;
	while (t--) {
		cin >> n >> d;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int ans = a[0];
		for (int i = 1; i < n; i++) {
			if (d >= i) {
				int max_i =  d / i;
				if (a[i] < max_i) {
					ans += a[i];
					d -= a[i] * i;
					continue;
				} else {
					ans += max_i;
					d -= max_i * i;
				}
			} else {break;}
		}
		cout << ans << endl;
	}
}