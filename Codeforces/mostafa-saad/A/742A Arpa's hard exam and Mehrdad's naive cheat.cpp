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

int Modulo(int a, char b[])
{
	// Initialize result
	int mod = 0;

	// calculating mod of b with a to make
	// b like 0 <= b < a
	for (int i = 0; i < strlen(b); i++)
		mod = (mod * 10 + b[i] - '0') % a;

	return mod; // return modulo
}

// function to find last digit of a^b
int LastDigit(char a[], char b[])
{
	int len_a = strlen(a), len_b = strlen(b);

	// if a and b both are 0
	if (len_a == 1 && len_b == 1 && b[0] == '0' && a[0] == '0')
		return 1;

	// if exponent is 0
	if (len_b == 1 && b[0] == '0')
		return 1;

	// if base is 0
	if (len_a == 1 && a[0] == '0')
		return 0;

	// if exponent is divisible by 4 that means last
	// digit will be pow(a, 4) % 10.
	// if exponent is not divisible by 4 that means last
	// digit will be pow(a, b%4) % 10
	int exp = (Modulo(4, b) == 0) ? 4 : Modulo(4, b);

	// Find last digit in 'a' and compute its exponent
	int res = pow(a[len_a - 1] - '0', exp);

	// Return last digit of result
	return res % 10;
}

void solve() {
	ll n; cin >> n;
	cout << LastDigit()
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