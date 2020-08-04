#include<iostream>
using namespace std;

void merge(int a[],int si,int mid);

void mergeSort(int a[], int si, int ei, int size){
	int mid = (si + ei)/2;
	if(si >= ei){
		return ;
	}
	cout<<"Yes"<<" "<<mid<<endl;
	mergeSort(a,si,mid,size);
	merge(a,si,mid);
	mergeSort(a,mid+1,ei,size);
	merge(a,mid+1,ei);
}

void merge(int a[],int si,int mid){
	cout<<"Inside Merge"<<endl;
	int c[mid-si +1], k=0;
	int i=0,j=0;
	while(i<si || j<mid){
//		cout<<"Inside while of Merge"<<endl;
		if(a[i]<a[j] && i<=si){
			c[k]=a[i];
			k++;
			i++;
			cout<<c[k]<<" ";
		}else{
			c[k]=a[j];
			k++;
			j++;
			cout<<c[k]<<" ";

		}
	}
	for(int i=0; i<(si-mid+1);i++){
		a[i] = c[i];
	};
}
void print(int a[], int size){
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}	
	cout<<endl;
}

main(){
	int arr[] = {4,5,2,9,8,7}, size=6;
	mergeSort(arr,0,5,size);
	print(arr,size);
}
