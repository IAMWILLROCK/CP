#include<iostream>
using namespace std;

int subsetSumToK(int inp[], int n, int k, int output[][20]){
	
	if(n==0 && k==0){
		output[0][0] = 0;
		return 1;
	} else {
		return 0;
	}
	
	int o1[10][20],o2[10][20];
	int s1 = subsetSumToK(inp+1, n-1, k-inp[0], o1);
	int s2 = subsetSumToK(inp+1, n-1, k, o2);
	
	for(int i=0;i<(s1+s2);i++){
		if(i<s1){
			int j=0;
			for(j;j<=o1[i][0];j++){
				output[i][j] = o1[i][j];
			}
			output[i][0] = output[i][0] + 1;
			output[i][j] = inp[0];
		}else{
			for(int j=0;j<=o2[i-s1][0];j++){
				output[i][j] = o2[i-s1][j];
			}
		}
	}
	
	return s1 + s2;
}

int main(){
	int arr[] = {2,1,3,2}, n = 4, k = 4;
	int output[20][20];
	int len = subsetSumToK(arr, n, k, output);
	
	for(int i=0;i<len;i++){
		for(int j=0;i<output[i][0];j++){
			cout<<output[i][j+1]<<" ";
		}
		cout<<endl;
	}
}
