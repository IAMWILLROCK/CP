#include <bits/stdc++.h>
using namespace std;

int lcs2Helper(string s1, string s2, int m, int n, int** dp, int k, vector<int> &sol){
   	if(m==0 || n==0){
		return 0;
	}
	if(dp[m][n] > -1){
		return dp[m][n];
	}
	int ans;
	if(s1[0] == s2[0]){
		ans = 1+lcs2Helper(s1.substr(1), s2.substr(1), m-1, n-1, dp, k, sol);
		cout<<"Pushing the ascii:"<<(int)s1[0]<<" into the vector"<<endl;
        sol.push_back(int(s1[0]));
	} else {
		ans = max(lcs2Helper(s1.substr(1), s2, m-1,n, dp, k, sol), lcs2Helper(s1, s2.substr(1), m, n-1, dp, k, sol));
	}
	dp[m][n] = ans;
	return ans; 
}

int solve(string s1, string s2, int k){
	int m = s1.length();
	int n = s2.length();
	
	int** dp = new int* [m+1];
	for(int i=0; i<=m; i++){
		dp[i] = new int [n+1];
		for(int j=0; j<=n; j++){
			dp[i][j] = -1;
		}
	}
	
    vector<int> sol;
    
	int ans = lcs2Helper(s1, s2, m, n, dp, k, sol);
	cout<<"got the sum: ";
	cout<<ans<<endl;
//	for(int i=0; i<=n; i++){
//		delete [] dp[i];
//	}
//	delete [] dp;
	cout<<"Sorting the vector"<<endl;
    sort(sol.begin(), sol.end(), greater<int>());
    cout<<"Sorted the vector"<<endl;
    int sum = 0;
    for(int i=0; i<k; i++){
        sum+=sol[i];
    }
    cout<<"Calculated sum"<<endl;
	return sum;
}

int main()
{
//    int t;
//    cin >> t;
//    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        int k;
        cin >> k;
        cout << solve(s1, s2, k) << endl;
//    }
    return 0;
}

