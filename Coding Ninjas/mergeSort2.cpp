#include<iostream>
using namespace std;

void mergeSort(int a[], int size){
	if(size==0){
		return ;
	}
	mergeSort(a,size/2);
	mergeSort(a+ size/2,size/2);
//	cout<<size<<endl;
	int x[size/2],y[size/2];
	for(int i=0;i<size/2;i++){
		cout<<a[i]<<" "<<i<<endl;
		x[i] = a[i];
	}
	cout<<endl;
	for(int i= size/2;i<size;i++){
//		cout<<a[i]<<" ";
		y[i] = a[i];
	}
//	for(int i=0;i<size/2;i++){
//		cout<<x[i]<<" ";
//	}
//	cout<<endl;
//	for(int i=0;i<size/2;i++){
//		cout<<y[i]<<" ";
//	}
}

int main(){
	int arr[]={4,5,2,9}, size=4;
	mergeSort(arr,size);
}
