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
	int n, m;
	cin >> n >> m;
	int g[n + 1], t[n + 1];
	memset(g, 0, sizeof(g));
	memset(t, 0, sizeof(t));
	for (int i = 0; i < m; i++) {
		int one, two, debt;
		cin >> one >> two >> debt;
		g[one] -= debt;
		t[two] += debt;
	}

	/*
	for (int i = 0; i < n + 1; i++)
		cout << g[i] << " ";
	cout << endl;
	for (int i = 0; i < n + 1; i++)
		cout << t[i] << " ";
	cout << endl;
	*/
	int answer = 0;
	for (int i = 0; i < n + 1; i++) {
		// cout << answer << " ";
		if ((t[i] + g[i]) > 0)
			answer += (t[i] + g[i]);
	}
	cout << answer;
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