#include<iostream>
using namespace std;

#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);


void merge(int arr[], int si, int ei) {
	int* temp = new int[ei - si + 1];
	int mid = (si + ei) / 2;
	int i = si, j = mid + 1, k = 0;
	while (i <= mid && j <= ei) {
		if (arr[i] < arr[j]) {
			temp[k] = arr[i];
			i++;
		} else {
			temp[k] = arr[j];
			j++;
		}
		k++;
	}
	while (i <= mid) {
		temp[k] = arr[i];
		i++;
		k++;
	}
	while (j <= ei) {
		temp[k] = arr[j];
		j++;
		k++;
	}
	int m = 0;
	for (int x = si; x <= ei; x++) {
		arr[x] = temp[m];
		m++;
	}
	delete [] temp;
}

void mergeHelper(int arr[], int si, int ei) {
	if (si >= ei) {
		return ;
	}
	int mid = (si + ei) / 2;
	mergeHelper(arr, si, mid);
	mergeHelper(arr, mid + 1, ei);
	merge(arr, si, ei);
}

void mergeSort(int arr[], int n) {
	mergeHelper(arr, 0, n - 1);
}
int main() {
	OJ
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	mergeSort(arr, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}
