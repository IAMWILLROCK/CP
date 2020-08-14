
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

int a[101][101];

void solve() {
	int n, m, target_row;
	target_row = 0;
	cin >> n >> m;
	char c;
	cin >> c;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char temp;
			cin >> temp;
			if (temp == c) target_row = i;
			a[i][j] = temp;
		}
	}
	int p_row[m];
	int ans = 0;
	for (int i = 0; i < m; i++) {
		p_row[i] = a[target_row][i];
	}
	for (int i = 0; i < n; ++i) {
		if (i == target_row)
			continue;
		int h, k;
		bool found = false;
		h = 0; k = m - 1;
		while (h < m) {
			if (p_row[h] == a[i][h]) {
				h++;
				continue;
			}
			if ((p_row[h] != a[i][h]) && h - 1 >= 0 && (a[i][h] != '.') && p_row[h] != '.') {
				if (p_row[h - 1] == a[i][h - 1]) {
					ans++; found = true; break;
				}
			} else break;
		}
		// cout << ans << " found: " << found << endl;
		if (found == false) {
			while (k >= 0) {
				if (p_row[k] == a[i][k]) {
					k--;
					continue;
				}
				if ((p_row[k] != a[i][k]) && k + 1 >= 0 && (a[i][k] != '.') && p_row[k] != '.') {
					if (p_row[k + 1] == a[i][k + 1]) {
						ans++; break;
					}
				} else break;
			}
		}

	}
	cout << ans;
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