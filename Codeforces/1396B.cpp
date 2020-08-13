#include<bits/stdc++.h>
using namespace std;

typedef vector <int> vi;
typedef pair< int , int > pii;
#define endl "\n"
#define sd(val) scanf("%d",&val)
#define ss(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define ll long long
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define fo(i,n) for(int i=0;i<n;i++)
#define what_is(x) cerr << #x << " is " << x << endl;
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


string isPossible(map<int, int> &m) {
	map<int, int>::iterator it;
	bool square = false;
	bool rectangle = false;
	for (it = m.begin(); it != m.end(); it++) {
		if (*it.second >= 4 && square != true) {
			square = true;
			m[*it.second] -= 4;
		}
		if (*it.second >= 4) {
			rectangle = true;
			m[*it.second] -= 4;
		}
	}
	if (square && rectangle) {
		return "YES";
	}
	for (it = m.begin(); it != m.end(); it++) {

	}
}

int main() {


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	FIO
	int n;
	cin >> n;
	int a[n];
	map<int, int> m;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		m[x]++;
	}
	int q;
	cin >> q;
	while (q--) {
		pair<char, int> state;
		cin >> state.first >> state.second;
		if (state.first == '+') {
			m[state.second]++;
		} else {
			m[state.second]--;
		}
		string ans = isPossible(m);
		cout << ans << endl;
	}
	return 0;
}