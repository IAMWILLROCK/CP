#include<iostream>

void mergeHelper(int arr[], int si, int ei, int n){
	if(n==0){
		return ;
	}
	int mid = (si+ei)/2;
	mergeHelper(arr, si, mid, n/2);
	mergeHelper(arr, mid+1, ei, n/2);
	
}

void mergeSort(int arr[], int n){
	mergeHelper(arr, 0, n-1, n);
}

int main(){
	int arr[] = {4,6,2,1,9,3}, n = 6;
	mergeSort(arr,n);
}
