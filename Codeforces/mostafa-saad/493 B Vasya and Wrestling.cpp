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


int n;

void solve() {
	cin >> n;
	vector<int> v[2];
	int a[n];
	rep(i, 0, n) cin >> a[i];
	ll ans = 0;
	rep(i, 0, n) {
		ans += a[i];
		if (a[i] > 0)	v[0].push_back(a[i]);
		if (a[i] < 0) 	v[1].push_back(-a[i]);
	}
	// cout << s1 << " " << s2 << endl;
	bool flag = false;
	if (ans > 0) cout << "first";
	else if (ans < 0) cout << "second";
	else {
		for (int i = 0; i < (int)v[0].size(); i++) {
			if (v[0][i] > v[1][i]) {
				cout << "first";
				flag = true;
				break;
			}
			if (v[0][i] < v[1][i]) {
				cout << "second";
				flag = true;
				break;
			}
		}
		if (!flag) {
			if (a[n - 1] > 0) cout << "first";
			else cout << "second";
		}
	}

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