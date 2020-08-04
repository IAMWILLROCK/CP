#include<stdio.h>
int x;
void arrayInit(int *a,int x){
	int i;
	
	for(i=0;i<x;i++){
		scanf("%d",&a[i]);
//		printf("Inside arrayINit");
	}
}
void display(int *a,int x){
	int i;
	for(i=0;i<x;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
}
main(){
	// Reversing an Array
	int x;
	int temp,arr[]={},start=0,end=x;
	
	printf("How many digits:");
	scanf("%d",&x);
	arrayInit(&arr,x);
	display(&arr,x);
	for(start;start!=x/2;start++){
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		end--;
//		printf("%d\t",temp);
	}
	display(&arr, x);
}

	
