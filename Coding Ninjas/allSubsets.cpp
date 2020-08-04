#include<iostream>
using namespace std;

int subset(int input[], int n, int output[][20]) {
    // Write your code here
  if(n==0){
//		cout<<"Base Case"<<endl;
		output[0][0] = 0;
		return 1;
	}
	int smallSize = subset(input+1,n-1,output);
	for(int i=0;i<2*smallSize;i++){
//		cout<<"Writing the output array"<<endl;
//		cout<<output[i][0]<<endl;
		if(i>=smallSize){
			output[i][0] = output[i-smallSize][0]+1;
          output[i][1] = input[0];
			for(int j=0;j<output[i][0];j++){
//				cout<<"Inside the J array"<<" "<<j<<" "<<output[i][0]<<" "<<i<<" "<<smallSize<<endl;
				
				output[i][j+2] = output[i-smallSize][j+1];
			}
		}
	}
	return smallSize*2;
}

int summer(int inp[][20], int n, int k, int output[][20]){
	int curPos = 0;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0; j<inp[i][0]; j++){
			sum += inp[i][j+1];
		}
		if(sum == k){
			for(int j=0; j<=inp[i][0]; j++){
				output[curPos][j] = inp[i][j];	
			}	
			curPos++;
		}
	}
	return curPos;
}


int main(){
	int arr[] = {2,1,3}, n=3, output[20][20];
	int len = subset(arr, n, output);
	for(int i=0; i<len; i++){
		for(int j=0;j<output[i][0];j++){
			cout<<output[i][j+1]<<" ";
		}
		cout<<endl;
	}
	
	int output1[20][20], k=4;
	
	int len1 = summer(output, len, k, output1);
	cout<<endl<<len1<<endl;
	for(int i=0; i<len1; i++){
		for(int j=0;j<output1[i][0];j++){
			cout<<output1[i][j+1]<<" ";
		}
		cout<<endl;
	}
}
