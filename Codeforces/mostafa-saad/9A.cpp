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
	int a, b;
	cin >> a >> b;
	int max_ = (a > b) ? a : b;
	int numerator = abs(max_ - 6);

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

void fracion(double x) {
	String a = "" + x;
	String spilts[] = a.split("\\."); // split using decimal
	int b = spilts[1].length(); // find the decimal length
	int denominator = (int) pow(10, b); // calculate the denominator
	int numerator = (int) (x * denominator); // calculate the nerumrator Ex
	// 1.2*10 = 12
	int gcd = getGCD(numerator, denominator); // Find the greatest common
	// divisor bw them
	String fraction = "" + numerator / gcd + "/" + denominator / gcd;
	System.out.println(fraction);
}

int getGCD(int n1, int n2) {
	if (n2 == 0) {
		return n1;
	}
	return getGCD(n2, n1 % n2);
}
