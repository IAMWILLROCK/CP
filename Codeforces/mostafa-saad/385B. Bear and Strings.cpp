#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

const int MAX_N = 1e5 + 5;
const int MAX_L = 20; // ~ Log N
const long long MOD = 1e9 + 7;
const long long INF = 1e9 + 7;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;

#define LSOne(S) (S & (-S))
#define isBitSet(S, i) ((S >> i) & 1)



void solve() {
	string s;
	cin >> s;
	int n = s.length();
	int answer = 0; int ans = 0;
	bool status = false;
	bool got_the_answer = false;
	for (int i = 0; i < n; i++) {
		status = false;
		for (int j = i; j < n; j++) {
			// cout << "j: " << j << " " << s[j] << endl;
			if (status == true) continue;
			if (s[j] == 'b') {
				if (s.substr(j, 4) == "bear") {
					// cout << s.substr(j, 4) << " " << "i: " << i + 1 << " j:" << j + 4 << " ";
					answer += (n - j - 3);
					// cout << endl << "count " << (n - j - 3);
					status = true;
				}
			}
			// cout << endl << "i: " << i << " j:" << j << " ";
		}
	}

	cout << answer;
}


void test() {
	int answer = 0;
	answer += 'b';
	answer += 'e';
	answer += 'a';
	answer += 'r';
	cout << answer;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// test();
	// int tc; cin >> tc;
	// for (int t = 1; t <= tc; t++) {
	//cout << "Case #" << t  << ": ";
	solve();
	// }
}