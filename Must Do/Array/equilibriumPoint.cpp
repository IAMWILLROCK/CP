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
#define fo(i,n)	for(int i=0;i<n;i++)
#define what_is(x) cerr << #x << " is " << x << endl;
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int solve(int a[], int n) {
	int eq = -1;
	int lsum, rsum;
	lsum = rsum = 0;
	int i = 0, j = n - 1;
	while (i <= j) {
		if (lsum == rsum && j - i == 0) {
			eq = i + 1;
			break;
		}
		if (lsum < rsum) lsum += a[i++];
		else rsum += a[j--];

	}
	return eq;
}

int main() {
	OJ
	int t;
	sd(t);
	while (t--) {
		int n;
		sd(n);
		int a[n];
		fo(i, n) cin >> a[i];

		cout << solve(a, n) << endl;
	}
}