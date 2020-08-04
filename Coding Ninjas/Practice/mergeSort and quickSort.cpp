#include<iostream>
using namespace std;

//void merge(int a[], int si, int ei){
//	int arr[ei-si+1];
//	int mid = (si+ei)/2;
//	int i=si, j=mid+1, k=0;
//	// Copying the sort elements
//	while(i<=mid && j<=ei){
//		if(a[i] < a[j]){
//			arr[k] = a[i];
//			i++;
//		} else {
//			arr[k] = a[j];
//			j++;
//		}
//		k++;
//	}
//	
//	while(i<= mid){
//		arr[k] = a[i];
//		i++;
//		k++;
//	}
//	
//	while(j<=ei){
//		arr[k] = a[j];
//		j++;
//		k++;
//	}
//	int m=0;
//	for(int r=si;r<=ei;r++){
//		a[r] = arr[m];
//		m++;
//	}
//}
//
//void mergeSortHelper(int a[], int si, int ei){
//	if(si>=ei){
//		return ;
//	}
//	int mid = (si + ei)/2;
//	mergeSortHelper(a, si, mid);
//	mergeSortHelper(a, mid+1, ei);
//	merge(a, si, ei);
//	
//}
//
//void mergeSort(int a[], int size){
//	mergeSortHelper(a,0,size-1);
//}

void qSHelper(int a[], int si, int ei);
int partition(int a[], int si, int ei);

void printArray(int a[], int size){
	for(int i=0; i<size; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

// Quick Sort

void swap(int arr[], int a, int b){
	int temp;
	temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

int parition(int a[], int si, int ei){
	int count = 0;
	for(int i=si; i<=ei; i++){
		if(a[si]>a[i])
			count++;
	}
	int c = si+count;
	swap(a, si, c);
	
	int i=si, j=ei;
	while( i < c-1 && j > c+1){
		if(a[i] < a[c]){
			i++;
		} else if(a[j] > a[c]){
			j--;
		} else {
			swap(a, i, j);
			i++;
			j--;
		}
	}
	return c;
}

void qSHelper(int a[], int si, int ei){
	if(si>=ei){
		return ;
	}
	int c = partition(a, si, ei);
	qSHelper(a, si, c-1);
	qSHelper(a, c+1, ei);
}

void quickSort(int a[], int size){
	qSHelper(a, 0, size-1);
}



int main(){
//	int arr[] = {4,8,1,2,0};
//	mergeSort(arr,5);
//	printArray(arr,5);
	int arr[] = {4,8,1,2,0};
	quickSort(arr,5);
	printArray(arr,5);
}
