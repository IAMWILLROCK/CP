#include <bits/stdc++.h>
using namespace std;

int minPlatforms(int ar[], int dp[], int n){
    sort(ar, ar+n);
    sort(dp, dp+n);
    int i=1, j=0;
    int result=1, plat = 1;
    while(i<n && j<n){
    	cout<<plat<<" ";
        if(ar[i] > dp[j]){
            plat++;
            j++;
            if(plat > result)
                result = plat;
        } else {
            plat--;
            i++;
        }
    }
    return result;
}

int main() {
	//code
//	int t;
//	cin>>t;
//	while(t--){
	    int n;
	    cin>>n;
	    int ar[n];
	    int dp[n];
	    for(int i=0; i<n; i++)  
	        cin>>ar[i];
	    for(int i=0; i<n; i++)
	        cin>>dp[i];
	    cout<<minPlatforms(ar, dp, n)<<endl;
//	}
	return 0;
}
