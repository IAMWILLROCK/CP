#include<iostream>
#include<cmath>
using namespace std;

int pos=0;

int subsetSumToK(int input[][20], int n, int output[20][20],int k){
	if(n==0){
		output[0][0] = 0;
		return 1;
	}
	int smallAns = subsetSumToK(input+1,n-1,output,k);
	int sum = 0;
	for(int i=0;i<input[0][0];i++){
		sum += input[0][i+1];
	}
	if(sum==k){
		for(int i=0;i<smallAns;i++){
			output[pos][i] = input[0][i];
			pos++; 
		}
		return pos;
	}
}

int subset(int input[], int n, int output[][20]) {
  	if(n==0){
		output[0][0] = 0;
		return 1;
	}
	int smallSize = subset(input+1,n-1,output);
	for(int i=0;i<2*smallSize;i++){
		if(i>=smallSize){
			output[i][0] = output[i-smallSize][0]+1;
          output[i][1] = input[0];
			for(int j=0;j<output[i][0];j++){
				output[i][j+2] = output[i-smallSize][j+1];
			}
		}
	}
	return smallSize*2;
}

int main(){
	int arr[] = {1,4,2,3}, n=4;
	int output[20][20];
	int k = 5;
	int output1[20][20];
	int x = subset(arr, n, output1);
	cout<<pos<<endl;
	int number = subsetSumToK(output1,x,output,k);
	cout<<pos<<" "<<number<<endl;
	for(int i=0;i<number;i++){
		cout<<"In main"<<endl;
		for(int j=0;j<output[0][0];j++){
			cout<<output[i][j+1]<<" ";
		}
		cout<<endl;
	}
}
