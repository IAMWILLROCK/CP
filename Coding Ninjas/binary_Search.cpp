#include<iostream>
using namespace std;

int binary_Search(int input[],int low,int high,int element){
	if(low>high){
		return -1;
	}
	int mid = (low + high)/2;
	if(input[mid] == element){
		return mid;
	}
	if(input[mid]<element){
	binary_Search(input,mid+1,high,element);	
	}else{
	binary_Search(input,low,mid-1,element);	
	}
	
	
}


main(){
	int arr[] = {1,2,3,4,5,6,7};
	cout << binary_Search(arr,0,6,7);
}
