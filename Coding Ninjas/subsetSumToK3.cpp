#include<iostream>
using namespace std;
int subsetSumToK(int [], int , int [][50], int );


//int SubsetSumTok(int input[], int n, int startIndex, int output[][50], int k);
int subsetSumToK(int input[], int n, int startIndex, int output[][50], int k){
	if(startIndex == n){
		if(k==0){
			output[0][0] = 0;
			return 1;
		}else{
			return 0;
		}
	}
	
	int smallOutput1[1000][50], smallOutput2[1000][50];
	int size1 = subsetSumToK(input, n , startIndex+1, smallOutput1, k);
	int size2 = subsetSumToK(input, n , startIndex+1, smallOutput2, k-input[startIndex]);
	
	int row = 0;
	for(int i = 0; i<size1 ; i++){
		for(int j = 0; j<=smallOutput1[i][0]; j++){
			output[row][j] = smallOutput1[i][j];
		}
		row++;
	}
	for(int i=0; i<size2;i++){
		output[row][0] = smallOutput2[i][0] + 1;
		output[row][1] = input[startIndex];
		for(int j = 1;j<=smallOutput2[i][0] ; j++){
			output[row][j+1] = smallOutput2[i][j];
		}
		row++;
	}
	return row;
}

int subsetSumToK(int input[], int n, int output[][50], int k){
//	cout<<"inside subsetSumToK"<<endl;
	subsetSumToK(input,n , 0,output,k);
	
}

void printSubsetSumToK(int input[], int size, int k){
	int output[50][50];
	int len = subsetSumToK(input,size,output,k);
	for(int i=0; i<len;i++){
		for(int j=0;j<output[i][0];j++){
			cout<<output[i][j+1]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int arr[] = {2,3,1,4};
	printSubsetSumToK(arr,4,5);
//	for(int i=0;i<len;i++){
//		for(int j=0;j<output[i][0];j++){
//			cout<<output[i][j+1]<<" ";
//		}
//		cout<<endl;
//	}
}
