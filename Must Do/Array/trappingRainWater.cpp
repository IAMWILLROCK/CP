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
#define fo(i,n)	for(int i=0;i<n;i++)
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl;
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int solve(int a[], int n) {
	int left = 0, right = n - 1;
	int left_max = 0, right_max = 0;
	int ans = 0;
	while (left <= right) {
		if (a[left] < a[right]) {
			if (left_max <= a[left])	left_max = a[left++];
			else	ans += left_max - a[left++];
		} else {
			if (right_max <= a[right])	right_max = a[right--];
			else	ans += right_max - a[right--];
		}
	}
	return ans;
}

int main() {
	OJ
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		fo(i, n) cin >> a[i];

		cout << solve(a, n);
	}
}