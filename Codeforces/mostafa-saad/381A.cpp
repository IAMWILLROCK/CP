#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int l, r;
	l = 0; r = n - 1;
	bool flag = true;
	int score1, score2;
	score1 = score2 = 0;
	while (r >= l) {
		if (flag) {
			if (a[l] > a[r]) {
				score1 += a[l];
				l++;
			} else {
				score1 += a[r];
				r--;
			}
		} else {
			if (a[l] > a[r]) {
				score2 += a[l];
				l++;
			} else {
				score2 += a[r];
				r--;
			}
		}
		flag = !flag;
		// cout << score1 << " " << score2 << endl;
	}
	cout << score1 << " " << score2;
}