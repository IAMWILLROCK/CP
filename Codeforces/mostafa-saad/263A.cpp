#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int i, j;
	for (i = 1; i <= 5; i++) {
		int x;
		for ( j = 1; j <= 5; j++) {

			cin >> x;
			if (x == 1) {
				break;
			}
		}
		if (x == 1)
			break;
	}
	cout << abs(i - 3) + abs(j - 3);
}