#include<iostream>
using namespace std;

//Merge Sort

void merge(int arr[], int si, int ei){
	int* temp = new int[ei-si+1];
	int mid = (si+ei)/2;
	int i = si, j = mid+1, k=0;
	while(i<=mid && j<=ei){
		if(arr[i] < arr[j]){
			temp[k] = arr[i];
			i++;
		} else {
			temp[k] = arr[j];
			j++;
		}
		k++;
	}
	while(i<=mid){
		temp[k] = arr[i];
		i++;
		k++;
	}
	while(j<=ei){
		temp[k] = arr[j];
		j++;
		k++;
	}
	int m=0;
	for(int x=si;x<=ei;x++){
		arr[x] = temp[m];
		m++;
	}
	delete [] temp;
}

void mergeHelper(int arr[], int si, int ei){
	if(si >= ei){
		return ;
	}
	int mid = (si+ei)/2;
	mergeHelper(arr, si, mid);
	mergeHelper(arr, mid+1, ei);
	merge(arr, si, ei);
}

void mergeSort(int arr[], int n){
	mergeHelper(arr, 0, n-1);
}


int main(){
	int arr[] = {5,3,2,4,8,2,6};
	mergeSort(arr, 7);	
	for(int i=0; i<7; i++){
		cout<<arr[i]<<" ";
	}
}
