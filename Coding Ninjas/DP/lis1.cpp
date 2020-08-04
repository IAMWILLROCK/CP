#include<iostream>
using namespace std;

int lis(int arr[], int size){
	int* dp = new int[size];
	dp[0] = 1;
	for(int i=1;i<size;i++){
		dp[i] = 1;
		for(int j=i-1; j>=0; j--){
			if(arr[j] < arr[i] && dp[j] >= dp[i]){
				dp[i] = dp[j] + 1;
			}
		}
	}
	int best=0;
	for(int i=0; i<size; i++){
		if(best<dp[i]){
			best = dp[i];
		}
	}
	return best;
}

int main(){
	int a[] = {3,6,1,2,7,9};
	cout<<lis(a,6)<<endl;
}
