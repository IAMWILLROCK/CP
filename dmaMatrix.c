#include<stdio.h>
#include<malloc.h>
main(){
	int a[10][10],x,y,i,j;
	printf("Enter the rows and columns, dawg:");
	scanf("%d%d",&x,&y);
	printf("\nEnter the numbers:");
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe numbers are:");
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("%d",a[i][j]);
		}
	}
	return 0;	
}
