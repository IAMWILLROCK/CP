#include "bits/stdc++.h"
using namespace std;

int dp[3001][3001];

vector<string> build(string s1, string s2, int n, int m) {
	vector<string>ans;
	if (m == 0 || n == 0) {
		ans.push_back("");
		return ans;
	}
	if (s1[n - 1] == s2[m - 1]) {
		vector<string> temp = build(s1, s2, n - 1, m - 1);
		for (auto str : temp) {
			ans.insert(str + s1[s1[n - 1]]);
		}

	}

	vector<string> top = build(s1, s2, n - 1, m);

	vector<string> left = build(s1, s2, n, m - 1);
	top.insert(top.end(), left.begin(), left.end());
	return top;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s, t;
	cin >> s >> t;
	int n1 = s.length(), n2 = t.length();
	for (int i = 0; i < n1 + 1; i++) {
		for (int j = 0; j < n2 + 1; j++) {
			if (i == 0 || j == 0)
				dp[i][j] = 0;
			else if (s[i - 1] == t[j - 1])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	vector<string> ans = build(s, t, n1, n2);
	for (auto it : ans) {
		cout << it << endl;
	}
}