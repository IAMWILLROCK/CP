#include<iostream>
using namespace std;

void merge(int input[],int len);

void mergeSort(int input[], int size){
	if(size==0){
		return ;
	}	
	mergeSort(input,size/2);
	mergeSort(input,size/2);
	merge(input,size);
}

void merge(int input[],int len){
	int a[len],b[len];
	cout<<len<<endl;
	for(int i=0;i<len;i++){
		a[i] = input[i];
//		cout<<a[i]<<" ";
	}
//	cout<<endl;
	for(int i=len;i<2*len;i++){
		b[i] = input[i];
//		cout<<b[i]<<" ";
	}
//	cout<<endl;
	int i=0,j=0,i_size,j_size;
	i_size=j_size=len;
	for(int k=0;k< (2*len);k++){
		if(a[i]<b[j] && i<i_size){
			input[k]=a[i];
			i++;
		}else{
			input[k]=b[j];
			j++;
		}
		k++;
	}
//	for(int i=0;i<len;i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
//	for(int i=len;i<2*len;i++){
//		cout<<b[i]<<" ";
//	}
//	cout<<endl;
}

int main(){
	int arr[]={4,2,9,5}, size=4;
	mergeSort(arr,size);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
