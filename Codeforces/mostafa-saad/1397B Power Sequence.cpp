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

double kthRoot(ll n, int k)
{
	return pow(k,
	           (1.0 / k)
	           * (log(n)
	              / log(k)));
}

ll power(ll x, ll y)
{
	ll res = 1; // Initialize result

	while (y > 0) {
		// If y is odd, multiply x with result
		if (y & 1)
			res = res * x;

		// n must be even now
		y = y >> 1; // y = y/2
		x = x * x; // Change x to x^2
	}
	return res;
}

void solve() {
	ll n;
	cin >> n;
	ll a[n];
	rep(i, 0, n) cin >> a[i];
	sort(a, a + n);

	ll ans1 = 0;
	ll ans2 = 0;
	double c1 = ceil(kthRoot(a[n - 1], n - 1));
	double c2 = floor(kthRoot(a[n - 1], n - 1));

	for (int i = 0; i < n; i++) {
		ans1 += abs(a[i] - power(c1, i));
		ans2 += abs(a[i] - power(c2, i));
	}
	cout << min(ans1, ans2);
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