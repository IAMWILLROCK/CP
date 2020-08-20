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

bool sortByFirst(pair<int, int> a, pair<int, int> b) {
	return (a.first < b.first);
}

void solve() {
	int n;
	cin >> n;
	vector<pair<int, int>>v;
	for (int i = 0; i < n; i++) {
		pair<int, int> temp;
		int x;
		cin >> x;
		temp = make_pair(x, i);
		v.push_back(temp);
	}
	sort(v.begin(), v.end(), sortByFirst);

	for (auto it : v) {
		cout << it.first << " " << it.second << endl;
	}

	pair<int, int> last;
	vector<pair<int, int>> answer;
	int d = 0;
	bool status = false;
	for (int i = 0; i < n; i++) {
		cout << "Iteration " << i << " " << d << endl;
		pair<int, int> temp;
		temp = v[i];
		if (i == 0) {
			last = temp;
			continue;
		}
		if (temp.first == last.first) {
			// cout << "temp.first "  << temp.first << " last.first " << last.first << endl;
			if (last.second == 0) {
				d = temp.second - last.second;
				last = temp;
				// continue;
			}
			if (temp.second == last.second) {
				if (d == 0) {d = temp.second - last.second;}

				last = temp; status = true;
			} else {
				d = 0; status = false;
				last = temp;
			}
		} else {
			// cout << "In the else " << "temp.first " << temp.first << " last.first " << last.first << " Status " << status << " d " << d << endl;

			if (status == true) {
				answer.push_back(make_pair(last.first, d));
				d = 0;
			}
			last = temp;
		}

	}
	cout << answer.size() << endl;
	for (auto it : answer) {
		cout << it.first << " " << it.second << endl;
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