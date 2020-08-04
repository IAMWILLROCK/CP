#include<iostream>
using namespace std;


int main(){
	int t,x;
	cin>>t;
	t=x;
	while(t--){
		int n;
		cin>>n;
		if(n==0){
			cout<<"Case "<<x-t<<": "<<0<<endl;
		}
		if(n==1){
			long long int k;
			cin>>k;
			cout<<"Case "<<x-t<<": "<<k<<endl;
		}
		long long int dp[n+1];
		dp[0] = 0;
		cin>>dp[1]>>dp[2];
		dp[2] = max(dp[1], dp[2]);
		for(int i=3;i<=n;i++){
			long long int k;
			cin>>k;
			dp[i] = max(k+dp[i-2], dp[i-1]);
		}
		cout<<"Case "<<x-t<<": "<<dp[n]<<endl;
	}
}
