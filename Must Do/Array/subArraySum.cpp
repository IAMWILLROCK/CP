#include <iostream>
using namespace std;

void fun(int* a, int n, int k){
    int sum=0; int ei=0, si=0;
    while(ei<n){
        sum+=a[ei];
        if(sum > k){
            while(sum > k){
                sum-=a[si];
                si++;
            }
        }
        if(sum == k){
            cout<<si+1<<" "<<ei+1;
            break;
        }
        ei++;
    }
}

int main() {
	//code
	int t;
	cin >> t;
	int n, k;
	cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++){
	    cin >> a[i];
	}
	fun(a, n, k);
	return 0;
}
