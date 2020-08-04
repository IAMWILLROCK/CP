#include<iostream>
using namespace std;

int binarySearch(int arr[], int si, int ei, int element){
	if(si>ei){
		return -1;
	}
	int mid = (ei + si)/2;
	if(arr[mid] == element){
		return mid;
	}
	if(arr[mid] > element){
		binarySearch(arr,si,mid,element);
	}else{
		binarySearch(arr,mid+1,ei,element);		
	}
		
}

int main(){
	int arr[6] = {1, 2, 3, 4, 5 ,6};
	cout<<binarySearch(arr, 0, 5, 6);
}
