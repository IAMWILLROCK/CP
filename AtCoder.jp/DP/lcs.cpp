#include "bits/stdc++.h"
using namespace std;
string lcs_(string str1, string str2) {
	int n = str1.size(), m = str2.size();
	vector<vector<string>> dp(n, vector<string>(m, ""));
	string temp = "";
	dp[0][0] = str1[0] == str2[0] ? (temp + str1[0]) : "";
	for (int i = 1; i < m; i++)
		dp[0][i] = str1[0] == str2[i] ? temp + str1[0] : dp[0][i - 1];
	for (int i = 1; i < n; i++)
		dp[i][0] = str2[0] == str1[i] ? temp + str2[0] : dp[i - 1][0];
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			dp[i][j] = str1[i] == str2[j] ? dp[i - 1][j - 1] + str1[i] : (dp[i - 1][j].size() > dp[i][j - 1].size()) ? dp[i - 1][j] : dp[i][j - 1];
		}
	}
	return dp[n - 1][m - 1];
}

string solve(string s1, string s2) {
	int n1 = s1.length(), n2 = s2.length();
	string dp[n1 + 1][n2 + 1];
	for (int i = 0; i < n1 + 1; i++) {
		for (int j = 0; j < n2 + 1; j++) {
			if (i == 0 || j == 0)
				dp[i][j] = "";
			else if (s1[i - 1] == s2[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + s1[i - 1];
			} else {
				int one = dp[i - 1][j].length();
				int two = dp[i][j - 1].length();
				if (one > two)
					dp[i][j] = dp[i - 1][j];
				else
					dp[i][j] = dp[i][j - 1];
			}
		}
	}
	return dp[n1][n2];
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s1, s2; cin >> s1 >> s2;
	// cout << solve(s1, s2) << endl;
	cout << lcs_(s1, s2) << endl;

	// skeegrofskeeg
}