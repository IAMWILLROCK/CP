#include <bits/stdc++.h>
using namespace std;

float distance(int X[], int Y[], int a, int b){
    return sqrt((X[a]-X[b])*(X[a]-X[b]) + (Y[a]-Y[b])*(Y[a]-Y[b]));
}

float solve(int X[], int Y[], int fun[], int n, float *dp){
    if(n == 1)
        return fun[n-1];
//    if(dp[n-1] != -1)
//        return dp[n-1];
    float ans = INT_MIN;
    for(int i=1; i<n; i++){
        float x = solve(X+i, Y+i, fun+i, n-i, dp);
        x = x - distance(X, Y, 0, i) + fun[0];
        if (ans < x)
            ans = x;
    	// cout<<ans<<endl;
//        dp[i] = ans;
    }
    // return ans;
//    for(int i=0; i<n; i++)
//        cout<<dp[i]<<" ";
//    cout<<endl;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    
    int X[n], Y[n], fun[n];
    for(int i=0; i<n; i++)
        cin >> X[i] >> Y[i] >> fun[i];
    
    float *dp = new float[n];
    for(int i=0; i<n; i++)
        dp[i] = -1;
    dp[0] = fun[0];
    
    float ans = solve(X, Y, fun, n, dp);
    printf("%0.6f\n", ans);
    
    return 0;
}

