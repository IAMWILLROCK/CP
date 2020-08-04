#include<iostream>
#include<cmath>
using namespace std;

int subset(int input[], int n, int output[][20]){
	if(n==0){
		output[0][0];
		return 1;
	}
	int smallAns = subset(input+1,n-1,output);
	for(int i=0;i< 2*smallAns; i++){
		if(i>=smallAns){
			output[i][0] = output[i-smallAns][0] + 1;
			output[i][1] = input[0];
			for(int j=0;j<output[i][0];j++){
				output[i][j+2] = output[i-smallAns][j+1];
			}
		}
	}
	return 2*smallAns;
}

int main(){
	int arr[] = {1,2,3}, n=3;
	int output[8][20];
	for(int i=0;i<(int)pow(2,n);i++){
		for(int j=0;j<output[i][0];j++){
			cout<<output[i][j+1]<<" ";
		}
		cout<<endl;
	}
}
