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
#define endl '\n'
#define rep(i,a,n) for (int i=a;i<n;i++)

int ans[3];
char f, s, t;
bool flag = true;

void check(int n, char c) {
	if (n == 0) {
		s = c;
	} else if (n == -2) {
		f = c;
	} else if (n == 2) {
		t = c;
	} else {
		flag = false;
	}
}

void solve() {
	string str[3];
	cin >> str[0] >> str[1] >> str[2];
	for (auto s : str) {
		if (s[1] == '>') {
			int c1 = s[0] - 'A';
			ans[c1]++;
			int c2 = s[2] - 'A';
			ans[c2]--;
		} else {
			int c1 = s[0] - 'A';
			ans[c1]--;
			int c2 = s[2] - 'A';
			ans[c2]++;
		}
	}

	rep(i, 0, 3) {
		check(ans[i], i + 'A');
	}

	for (int i = 0; i < 2; i++) {
		if (ans[i] == ans[i + 1]) {
			flag = false;
		}
	}
	if (flag)
		cout << f << s << t;
	else
		cout << "Impossible";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// int tc; cin >> tc;
	// for (int t = 1; t <= tc; t++) {
	//cout << "Case #" << t  << ": ";
	solve();
	// }
}