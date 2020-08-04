#include<iostream>
using namespace std;

void qSHelper(int a[], int si, int ei);

void printArray(int a[], int size){
	for(int i=0; i<size; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void swap(int arr[], int a, int b){
	int temp;
	temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

int partition(int a[], int si, int ei){
	int count = 0;
	for(int i=si; i<=ei; i++){
		if(a[si]>a[i])
			count++;
	}
	int c = si+count;
	swap(a, si, c);
	int i=si, j=ei;
	while( i <= c-1 && j >= c+1){
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
//	cout<<c<<endl;
	qSHelper(a, si, c-1);
	qSHelper(a, c+1, ei);
}

void quickSort(int a[], int size){
	qSHelper(a, 0, size-1);
}

int main(){
	int arr[] = {4,8,1,2,0};
	printArray(arr,5);
	quickSort(arr,5);
	printArray(arr,5);
}
