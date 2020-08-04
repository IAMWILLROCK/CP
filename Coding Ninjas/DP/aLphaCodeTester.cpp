#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
long long alphacode(string inp, int n){
    long long* dp = new long long[n+1];
    for(int i=0; i<n+1; i++){
    	dp[i] = 0;
	}
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i<=n; i++){
        int output = dp[i-1]%M;
        if((inp[i-2]-'0')*10 + (inp[i-1] - '0') <= 26){
            output = ((output)%M + (dp[i-2])%M)%M;
        }
        dp[i] = output;
    }
    int ans = dp[n];
    delete [] dp;
    return ans;
}

int main()
{
    string input[100];
    int n;
    for(int i=0; i<100; i++){
        cin>>input[i];
        if(input[i] == "0"){
            n = i;
            break;
        }
    }
    
    for(int i=0; i<n; i++){
        cout<<alphacode(input[i], input[i].size())<<endl;
    }
    return 0;
}

