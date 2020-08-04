#include<iostream>
using namespace std;

void merge(int a[], int si, int ei);

void mergeSort(int a[], int si, int ei){
	if(si>=ei){ // If you have only one element in the array, then it's already sorted
		return;
	}	
	int mid = (si+ei)/2;
	mergeSort(a,si,mid); // Go sort the left half
	mergeSort(a,mid+1,ei); // Go sort the right half
	merge(a,si,ei); // No we have the left and right halves sorted. No combine them in a sorted manner
}

void merge(int a[], int si, int ei){
	int* temp = new int[ei-si+1]; // Declare a new array with the size of the array that we are currently looking to sort
	int k = 0;
	int i = si; 
	/* */
	int mid = (si+ei)/2;
	int j = mid+1;
	while(i <= mid && j <= ei){
		if(a[i] < a[j]){
			temp[k] = a[i];
			i++;
		}else{
			temp[k] = a[j];
			j++;
		}
		k++;
	}
	while(i <= mid){
		temp[k] = a[i];
		k++;
		i++;
	}
	while(j <= ei){
		temp[k] = a[j];
		k++;
		j++;
	}
	int m=0;
	for(int i=si;i<=ei;i++){
		a[i] = temp[m];
		m++;
	}
	delete [] temp;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	mergeSort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
