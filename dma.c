#include<stdio.h>
#include<malloc.h>
unsigned int * getno(int n){
	int *p;
	p=(int *)malloc(sizeof(int)*n);
	printf("\n%u",p);
	if(p==NULL){
		printf("\nFucked Up!!");
		return 0;
	}
	return p;
}
void readArray(int *a,int n){
	int i;
	printf("\nEnter those shitty numbers one by one:");
	for(i=0;i<n;i++){
		scanf("%d",(a+i));
	}
}
void printArray(int *a,int n){
	int i;
	printf("\nThose shitty numbers are:");
	for(i=0;i<n;i++){
		printf("\n%d",*(a+i));
	}
}
main(){
	int *a,n;
	printf("Enter the number:");
	scanf("%d",&n);
	a=getno(n);
	printf("\n%u",a);
	readArray(a,n);
	printArray(a,n);
	return 0;
}
