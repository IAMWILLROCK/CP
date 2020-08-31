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

ll total[2], a[2], b[2];

void solve() {
	cin >> total[0] >> total[1];
	// ll total;
	// total = p + f;
	// cout << "total: " << total << endl;
	cin >> a[0] >> a[1];
	cin >> b[0] >> b[1];
	int small, big;
	ll count = 0;
	if (b[0] < b[1]) {
		small = 0; big = 1;
	} else {
		small = 1; big = 0;
	}
	while (total[0] > 0) {
		// count++;
		// cout << total[0] << " ";
		if (a[small] > 0) {
			total[0] -= b[small];

			if (total[0] >= 0 && a[small] >= 0) {
				count++;
				a[small]--;
			}
		} else {
			total[0] -= b[big];

			if (total[0] >= 0 && a[big] >= 0) {
				count++;
				a[big]--;
			}
		}
	}
	cout << count << endl;
	cout << a[0] << " " << a[1] << endl;
	cout << b[0] << " " << b[1] << endl;
	while (total[1] > 0) {
		// count++;
		// cout << total[1] << " ";
		if (a[small] > 0) {
			total[1] -= b[small];

			if (total[1] >= 0 && a[small] >= 0) {
				count++;
				a[small]--;
			}
		} else {
			total[1] -= b[big];

			if (total[1] >= 0 && a[big] >= 0) {
				count++;
				a[big]--;
			}
		}
	}
	cout << endl << count << endl;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int tc; cin >> tc;
	for (int t = 1; t <= tc; t++) {
		//cout << "Case #" << t  << ": ";
		solve();
	}
}