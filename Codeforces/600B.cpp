#include <bits/stdc++.h>
using namespace std;

int binary_search(int a[], int l, int r, int key) {
	if (key < a[0])
		return -1;
	int m;
	while (r - l > 1) {
		m = l + (r - l) / 2;
		if (a[m] <= key) {
			l = m;
		} else {
			r = m;
		}
	}
	return l + 1;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	sort(a, a + n);
	/*
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	for (int i = 0; i < m; i++)
		cout << b[i] << " ";
		*/
	for (int i = 0; i < m; i++) {
		int ans = binary_search(a, 0, n, b[i]);
		if (ans == -1) {cout << 0 << " ";}
		else cout << ans << " ";
	}
	// cout << endl << "Checkling the normal binary search" << bs(a, 0, n - 1, 9) << endl;
}