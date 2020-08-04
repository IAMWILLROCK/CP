#include<iostream>
using namespace std;

int binaryHelper(int arr[], int si, int ei, int element){
	if(si>=ei){
		return -1;	
	}
	int mid = (si+ei)/2;
	if(arr[mid] == element){
		return mid;
	}
	if(arr[mid] > element){
		binaryHelper(arr, si, mid, element);	
	} else {
		binaryHelper(arr, mid+1, ei, element);	
	}
	
	
}

int binarySearch(int a[], int size, int element){
	int ans = binaryHelper(a, 0, size-1, element);
	return ans;
}

int main(){
	int arr[] = {1,2,3,4,5,6,7};
	cout << binarySearch(arr,7,5);
}
