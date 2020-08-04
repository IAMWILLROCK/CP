#include<iostream>
#include<cstring>
using namespace std;

int lcs(char *s1, char *s2){
	if(s1[0] == '\0' || s2[0] == '\0'){
		return 0;
	}
	if(s1[0] == s2[0]){
		return 1+lcs(s1+1, s2+1);
	} else {
		return max(lcs(s1+1, s2), lcs(s1, s2+1));
	}
	
}

int lcs2Helper(string s1, string s2, int m, int n, int** dp){
    if(m==0 || n==0)
        return 0;
	if(dp[m][n] > -1)
        return dp[m][n];
    int ans;
    if(s1[0] == s2[0])
        ans = 1 + lcs2Helper(s1.substr(1), s2.substr(1), m-1, n-1, dp);
    else{
        ans = max(lcs2Helper(s1.substr(1), s2, m-1, n, dp),lcs2Helper(s1, s2.substr(1), m, n-1, dp));
    }
    dp[m][n] = ans;
    return ans;
}

int lcs2(string s1, string s2){
    int m = s1.length();
    int n = s2.length();
    int **dp = new int*[m+1];
    for(int i=0; i<=m; i++){
        dp[i] = new int[n+1];
        for(int j=0; j<=n; j++){
            dp[i][j] = -1;
        }
    }
    int ans = lcs2Helper(s1, s2, m, n, dp);
	for(int i=0; i<=m; i++){
        delete [] dp[i];
    }
    delete [] dp;
    return ans;
}

int main(){
	string s1, s2;
	cin >> s1 >> s2;
	cout << lcs2(s1, s2)<< endl;
}
