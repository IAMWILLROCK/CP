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

int N = 55;

int p, q, l, r;

void solve() {
	cin >> p >> q >> l >> r;
	int a[N], b[N], c[N], d[N];
	rep(i, 0, p) cin >> a[i] >> b[i];
	rep(i, 0, q) cin >> c[i] >> d[i];
	int ans = 0;
	int x = 0;
	for (int t = l; t <= r; t++) {
		for (int i = 0; i < p; i++) {
			for (int j = 0; j < q; j++) {
				if (c[j] + t > b[i] || d[j] + t < a[i]) {
					continue;
				} else {
					x = 1;
				}
			}
		}
		if (x) ans++;
	}
	cout << ans - 1;
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