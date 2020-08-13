#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */cin >> a[i];
	}
	int claw_power = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (claw_power == 0) {
			claw_power = a[i];
		}
		else if (claw_power > 0) {
			if (a[i] == 0) a[i] = -1;
			else a[i] = a[i] * -1;
			claw_power--;
		}
	}
	/*
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	*/
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > 0)
			ans++;
	}
	cout << ans << endl;
}