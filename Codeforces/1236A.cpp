#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t, a, b, c;
	cin >> t;
	int ans;
	while (t--) {
		ans = 0;
		cin >> a >> b >> c;
		// cout << t << " " << a << " " << b << " " << c << " " << endl;
		int a1 = min(c / 2, b);
		if (a1 > 0) {
			ans += a1 * 3;
			b -= a1;
		}
		int a2 = min(b / 2, a);
		if (a2 > 0)
			ans += a2 * 3;
		cout << ans << endl;
	}

}