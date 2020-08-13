#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> getInput() {
	vector<int> arr;
	int n, x;
	cout << "Enter the number of elements:" << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		arr.push_back(x);
	}
	return arr;
}
void display(vector<int> arr) {
	vector <int>::iterator it;
	for (it = arr.begin(); it != arr.end(); it++) {
		cout << *it << " ";
	}
}
void binarySearch(vector<int> arr, int tr, int st, int en, int mid) {
	if (arr[mid] == tr) {
		cout << "\n\nYou got it!!";
		cout << "\n\nThe position of the element is...  " << mid + 1 << endl;
		return;
	}
	else if (arr[mid] > tr) {
		en = mid - 1;
		mid = (st + en) / 2;
		binarySearch(arr, tr, st, en, mid);
	} if (arr[mid] < tr) {
		st = mid + 1;
		mid = (st + en) / 2;
		binarySearch(arr, tr, st, en, mid);
	}

}
int main() {
	vector <int> arr;
	int tr, st = 0, mid;
	arr = getInput();
	int en = arr.size();
	sort(arr.begin(), arr.end());
	display(arr);
	cout << "\nEnter the Target:";
	cin >> tr;
	mid = (st + en) / 2;
	binarySearch(arr, tr, st, en, mid);
	display(arr);
}
