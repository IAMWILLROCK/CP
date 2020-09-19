#include "bits/stdc++.h"
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
#define pb push_back
#define mm(X) memset((X), 0, sizeof((X)))
#define deb(x) cout<<#x<<" "<<x<<endl;



void solve() {
	int n;
	cin >> n;
	int a[n];
	rep(i, 0, n)
	cin >> a[i];
	sort(a, a + n, greater<int>());
	if (n == 1) {
		cout << 1;
		return;
	}
	if (n == 2) {
		if (a[0] == a[1]) {
			cout << 2;
			return;
		} else {
			cout << 1;
			return;
		}
	}

	int lsum = 0;
	int sumarray[n];
	sumarray[n - 1] = a[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		sumarray[i] = sumarray[i + 1] + a[i];
	}
	for (int i = 0; i < n - 1; i++) {
		lsum += a[i];
		if (lsum > sumarray[i + 1]) {
			cout << i + 1;
			break;
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