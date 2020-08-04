#include <iostream>
using namespace std;

void subarray(long long a[], int n, long long sum){
    long long currSum=0;
    int si=0, ei=0;
    for(int i=0; i<=n; i++){
		while(currSum > sum && si <= ei){
			currSum -= a[si];
			si++;
		}
		if(currSum == sum){
			cout<<si+1<<" "<<ei<<endl;
			return ;
		}
		currSum += a[i];
		ei++;
    }
    cout<<-1<<endl;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin >> n;
	    long long a[n];
	    long long sum;
	    cin >> sum;
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	    }
//	    cout<<n<<sum<<endl;
	    subarray(a, n, sum);
	}
	return 0;
}
