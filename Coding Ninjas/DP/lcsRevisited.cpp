#include<iostream>
using namespace std;

int lcs(int a[], int n){
	int dp[n];
	for(int i=0; i<n; i++){
		dp[i] = 0;
	}
	dp[0] = 1;
	for(int i=1; i<n; i++){
		dp[i] = 1;
		for(int j=i-1; j>=0; j--){
			if(a[i] > a[j] && dp[i]<=dp[j]){
				dp[i]+=dp[j];
			}
		}
	}
	int max=0;
	for(int i=0; i<n; i++){
		if(max<dp[i]){
			max = d[i];
		}
	}
	return max;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	cout<<lcs(a, n);
}
