#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;


int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    
    
    ////////////////////////
    int dp[n][101];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<=100; j++){
            dp[i][j] = 0;
        }
    }
    
    for(int i=0; i<n; i++)
        dp[i][a[i]] = 1;
 
    for(int i = 1; i<n; i++){
        for(int k=0; k<i; k++){
            if(a[i] > a[k]){
                for(int g=1;g<=100; g++){
                    if(dp[k][g]> 0){
                    int nGcd = __gcd(g, a[i]);
                    dp[i][nGcd] = (dp[i][nGcd] + dp[k][g])%mod;
                    }
                }
            }
        }
    }
    
    long ans = 0;
    for(int i=0; i<n; i++)
    	ans = (ans+ dp[i][1])%mod;
    cout<<ans;
    return 0;
}


