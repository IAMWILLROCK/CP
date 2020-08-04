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

int solve(int a[], int N, int M) {
	sort(a, a + N);
	int ans = INT_MAX;
	if (N == M) {
		ans = a[N - 1] - a[0];
		return ans;
	}
	for (int i = 0; i < N - M; i++) {
		ans = min(ans, a[i + M - 1] - a[i]);
	}
	return ans;
}

int main() {
	OJ
	int t;
	cin >> t;
	while (t--) {
		int N;
		cin >> N;
		int a[N];
		fo(i, N)	cin >> a[i];
		int M;
		cin >> M;
		cout << solve(a, N, M) << endl;
	}
	return 0;
}