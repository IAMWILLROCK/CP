#include<iostream>
using namespace std;

int lis(int a[], int size){
	int* dp = new int[size];
	dp[0] = 1;
	for(int i=1; i<size; i++){
		dp[i] = 1;
		for(int j=i-1; j>=0; j--){
			if(a[i]>a[j] && dp[j]>=dp[i]){
				dp[i]+=dp[j];
			}
		}
	}
	int best=0;
	for(int i=0;i<size;i++){
		if(best<dp[i]){
			best = dp[i];
		}
	}
	delete [] dp;
	return best;
}

int main(){
	int a[] = {548,678,776,587,970,680,278,122,947,467,797,503,660,892,254,276}, n=16;
	cout<<lis(a,n);	
}
