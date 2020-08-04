#include<iostream>
using namespace std;
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int partition(int input[], int low, int high);
void swap(int input[], int low, int high);

void swap(int input[], int low, int counter) {
	int temp;
	temp = input[low];
	input[low] = input[counter];
	input[counter] = temp;
}

int partition(int input[], int low, int high) {
	int pivot = input[low];
	int i = low;

	for (int j = low + 1; j <= high; j++) {
		if (input[j] < pivot) {
			i++;
		}
	}
	swap(input, low, i);
	int j = low, k = high;
	for (int m = low; m <= high; m++) {
		if (input[j] < pivot) {
			j++;
		} else if (input[k] > pivot) {
			k--;
		} else {
			swap(input, j, k);
		}
	}
	return i;
}

void quick_sort(int input[], int low, int high) {
	if (low < high) {
		int pi = partition(input, low, high);
		quick_sort(input, low, pi - 1);
		quick_sort(input, pi + 1, high);
	}
	return;
}

void quickSort(int input[], int size) {
	quick_sort(input, 0, size - 1);
}


int main() {
	OJ
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	quickSort(arr, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


V and S
billing capactity is 100 for both

I'm doing more work. My utilization is more because of more work
S 70percent  V 30percent
