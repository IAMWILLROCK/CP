#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int i,j,n,t;
	scanf("%d",&n);
	t=n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%d",t);
		}
		t--;
		printf("\n");
	}
}


