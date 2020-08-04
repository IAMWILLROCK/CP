#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int temp[n + 1];
	for (int i = 0; i < n + 1; i++) {
		temp[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		if (temp[a[i]] == 0) {
			temp[a[i]] = 1;
			continue;
		} else {
			cout << a[i] << " ";
		}
	}
	for (int i = 1; i < n + 1; i++) {
		if (temp[i] == 0) {
			cout << i << endl;
			break;
		}
	}
}

