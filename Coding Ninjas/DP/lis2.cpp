#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lis(int a[], int n){
	int dp[n];
	dp[0] = 1;
	for(int i=1; i<n; i++){
		dp[i] = 1;
		for(int j=i-1; j>=0; j--){
			if(a[i] > a[j]){
				dp[i] = max(dp[j]+1, dp[i]);
			} else {
				dp[i] = dp[j];
			}
		}
	}
	int ans = 0;
	for(int i=0; i<n; i++){
		ans = max(ans, dp[i]);
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	cout << lis(a, n) <<endl;
}
