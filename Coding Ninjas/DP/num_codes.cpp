#include<iostream>
using namespace std;

int num_codes(int a[], int n, int dp[]){
	if(n==0 || n==1){
		return 1;
	}
	if(dp[n] > 0){
		return dp[n];
	}
	int ans1 =0;
	ans1 = num_codes(a+1, n-1, dp);
	if(a[0]*10 + a[1] <=26){
		ans1+= num_codes(a+2, n-2, dp);
	}
	
	dp[n] = ans1;
		
	return ans1;
}

int num_codes_i(int a[], int n){
	int* dp = new int[n+1];
	for(int i=0; i<n+1; i++){
		dp[i] = 0;
	}
	dp[0] = 1;
	dp[1] = 1;
	for(int i=2; i<=n; i++){
		int ans;
		ans = dp[i-1];
		if(a[i-2]*10 + a[i-1] <= 26){
			ans+=dp[i-2];
		}
		dp[i] = ans;
	}
	int res = dp[n];
	delete [] dp;
	return res;
}

int main(){
	int n;
	cin>>n;
	int a[n], dp[n+1];
	for(int i=0; i<n; i++){
		cin>>a[i];
		dp[i] = 0;
	}
	dp[n] = 0;
	cout<<num_codes(a, n, dp)<<endl;
	cout<<num_codes_i(a, n)<<endl;
}
