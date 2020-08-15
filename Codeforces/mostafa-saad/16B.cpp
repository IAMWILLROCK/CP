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

bool myCompare(pair<int, int> x, pair<int, int> y) {
	return (x.second > y.second);
}

void solve() {
	long n, m;
	cin >> n >> m;
	vector<pair<long, long>> matchboxes;
	for (long i = 0; i < m; i++) {
		long a, b;
		cin >> a >> b;
		pair<long, long> temp = make_pair(a, b);
		matchboxes.push_back(temp);
	}
	sort(matchboxes.begin(), matchboxes.end(), myCompare);
	/*
	for (auto it : matchboxes) {
		cout << it.first << " " << it.second << endl;
	}
	*/
	ll matches = 0;
	for (int i = 0; i < m; i++) {
		if (n == 0)
			break;
		if (matchboxes[i].first <= n && n > 0)
		{
			matches += (matchboxes[i].first * matchboxes[i].second);
			n -= matchboxes[i].first;
		}
		else if (n > 0)
		{
			matches += (n * matchboxes[i].second);
			n = 0;
		}
		// cout << matches << endl;
	}
	cout << matches << endl;
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