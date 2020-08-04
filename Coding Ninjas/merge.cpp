#include<iostream>
using namespace std;

int* merge(int a[], int b[]){
	int *c = new int[4], k=0;
//	for(int i=0 && int j=0;i<(sizeof(a)/sizeof(a[0])) && j<(sizeof(b)/sizeof(b[0]));i++ ){
//		for(int j=0;j<(sizeof(b)/sizeof(b[0]));j++){
//			if(a[i]<b[j]){
//				c[k] = a[i];
//				k++;
//				
//			}
//		}
//	}
	int x=3,y=4,i=0,j=0;
	while(i<x || j<y){
		if(a[i]<b[j] && i<x){
			c[k]=a[i];
			k++;
			i++;
		}else{
			c[k]=b[j];
			k++;
			j++;
		}
	}
	return c;
}

void print(int arr[], int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

main(){
	int a[] = {1,2,9}, b[] = {3,4,10,11};
	int *c = merge(a,b);
	print(a,3);
	print(b,4);
	print(c,7);
}
