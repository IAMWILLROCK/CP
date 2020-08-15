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

bool distance(int a, int b, int c, int d, int r) {
	if ((a - c) * (a - c) + (b - d) * (b - d) <= r * r)
		return true;
	else
		return false;
}

void solve() {
	int Xa, Ya, Xb, Yb;
	cin >> Xa >> Ya >> Xb >> Yb;
	int xmin, xmax, ymin, ymax;
	if (Xa < Xb) {xmin = Xa; xmax = Xb;} else {xmin = Xb; xmax = Xa;}
	if (Ya < Yb) {ymin = Ya; ymax = Yb;} else {ymin = Yb; ymax = Ya;}
	// else {Y2 = Yb; X2 = Xb; Y1 = Ya; X1 = Xa;}
	// if (Xa > Xb) {X2 = Xa; X1 = Xb;}
	// else {X2 = Xb; X1 = Xa;}
	// cout << X2 << " " << Y2 << " " << X1 << " " << Y1;
	int n;
	cin >> n;
	// cout << n;
	vector<vector<int>> v;
	for (int i = 0; i < n; i++) {
		vector<int> temp;
		int x, y, z;
		cin >> x >> y >> z;
		// cout << x << " " << y << " " << z << endl;
		temp.push_back(x); temp.push_back(y); temp.push_back(z);
		// cout << "Temp Size: " << temp.size() << endl;
		v.push_back(temp);
	}

	set<pair<int, int>> generals;
	for (long k = ymin; k <= ymax; k++) {generals.insert(std::pair<long, long>(xmin, k));}
	for (long k = ymin; k <= ymax; k++) {generals.insert(std::pair<long, long>(xmax, k));}
	for (long k = xmin; k <= xmax; k++) {generals.insert(std::pair<long, long>(k, ymin));}
	for (long k = xmin; k <= xmax; k++) {generals.insert(std::pair<long, long>(k, ymax));}
	// cout << generals.size() << endl;

	/*
		for (auto it : generals) {
			cout << "(" << it.first << "," << it.second << ")" << endl;
		}

	*/
	vector<vector<int>>::iterator it;
	set<pair<int, int>>::iterator iter;
	vector<pair<int, int>>::iterator eraser;
	for (it = v.begin(); it != v.end(); it++) {
		vector<int> temp = *it;
		int x = temp[0], y = temp[1], r = temp[2];
		iter = generals.begin();
		while (iter != generals.end()) {
			pair<int, int>gen = *iter;
			if (distance(gen.first, gen.second, x, y, r)) {
				generals.erase(iter);
				iter = generals.begin();
			} else {
				iter++;
			}

			// iter++;

		}

	}
	cout << generals.size();
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