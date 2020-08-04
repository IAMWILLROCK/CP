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

ll solve(ll n) {
	if (n < 0)
		return 0;
	if (n == 1)
		return 1;
	int ans = 0;
	int i;
	for (i = 0; ans * 2 < n; i++) {
		ans *= 2;
	}
	return ans + solve(n - i);
}

int main() {
	OJ
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		// cout << solve(n) << endl;
	}
	cout << t;
	return 0;
}