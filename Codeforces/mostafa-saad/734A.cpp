#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	string str;
	cin >> str;
	int a, b;
	a = b = 0;
	for (int i = 0; i < n; i++) {
		if (str[i] == 'A')
			a++;
		else
			b++;
	}
	if (a == b) {
		cout << "Friendship";
	}
	else if (a > b) {
		cout << "Anton";
	} else {
		cout << "Danik";
	}
}