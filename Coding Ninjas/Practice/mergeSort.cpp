#include<iostream>
using namespace std;

void merge(int a[], int si, int ei){
	int arr[ei-si+1];
	int mid = (si+ei)/2;
	int i=si, j=mid+1, k=0;
	// Copying the sort elements
	while(i<=mid && j<=ei){
		if(a[i] < a[j]){
			arr[k] = a[i];
			i++;
		} else {
			arr[k] = a[j];
			j++;
		}
		k++;
	}
	
	while(i<= mid){
		arr[k] = a[i];
		i++;
		k++;
	}
	
	while(j<=ei){
		arr[k] = a[j];
		j++;
		k++;
	}
	int m=0;
	for(int r=si;r<=ei;r++){
		a[r] = arr[m];
		m++;
	}
}

void mergeSortHelper(int a[], int si, int ei){
	if(si>=ei){
		return ;
	}
	int mid = (si + ei)/2;
	mergeSortHelper(a, si, mid);
	mergeSortHelper(a, mid+1, ei);
	merge(a, si, ei);
	
}

void mergeSort(int a[], int size){
//	cout<<size-1<<endl;
	mergeSortHelper(a,0,size-1);
}

void printArray(int a[], int size){
	for(int i=0; i<size; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[] = {4,8,1,2,0};
	mergeSort(arr,5);
	printArray(arr,5);
}
