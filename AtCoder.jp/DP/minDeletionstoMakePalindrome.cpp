#include <iostream>
using namespace std;

int solve(string s) {
    int n = s.length();
    int dp[n + 1][n + 1];
    string s1 = string(s.rbegin(), s.rend());
    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < n + 1; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (s[i - 1] == s1[j - 1]) dp[i][j] = 1 + dp[i - 1][j - 1];
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    // cout << dp[n][n] << endl;

    return n - dp[n][n];
}

int main() {
    //code;
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s;
    cin >> s;
    cout << solve(s) << endl;

    return 0;
}