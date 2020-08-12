#include<bits/stdc++.h>
using namespace std;

int peakHelper(int a[], int l, int r, int n) {
	int mid = l + (r - l) / 2;
	if ((mid == 0 || (a[mid] >= a[mid - 1])) && (mid == n - 1 || a[mid] >= a[mid + 1]))
		return mid;
	if (mid > 0 && a[mid - 1] >= a[mid]) {
		return peakHelper(a, l, mid - 1, n);
	} else
		return peakHelper(a, mid + 1, r, n);
}

int peakElement(int a[], int n) {
	return peakHelper(a, 0, n - 1, n);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int a[n];
	// cout << n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	/*
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	*/
	cout << peakElement(a, n);

}