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

void reduceFraction(int x, int y)
{
	int d;
	d = __gcd(x, y);

	x = x / d;
	y = y / d;

	cout << x << "/" << y << endl;
}

void solve() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a > b) {
		int temp_1, temp_2;
		temp_1 = b, temp_2 = d;
		a = a * temp_2;
		b = b * temp_2;
		c = c * temp_1;
		d = d * temp_1;
		int needed;
		if (a > c) needed = a;
		else needed = c;
		reduceFraction(abs(a - c), needed);
		// cout << a << " " << b << " " << c << " " << d;
	} else {
		int temp_1, temp_2;
		temp_1 = a, temp_2 = c;
		a = a * temp_2;
		b = b * temp_2;
		c = c * temp_1;
		d = d * temp_1;
		int needed;
		if (b > d) needed = b;
		else needed = d;
		reduceFraction(abs(b - d), needed);
		// cout << a << " " << b << " " << c << " " << d;
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