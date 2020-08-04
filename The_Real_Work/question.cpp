#include<iostream>
using namespace std;

int fun(int n, int k){
	if( k > n)
		return 0;
	int ans;
	if(2*k < n)
		ans += 1 + fun(n, 2*k);
	if(2*k + 1 < n)
		ans += 1 + fun(n, 2*k+1);
	return ans;
}

int main(){
	int n;
	cin>>n;
	int k;
	cin>>k;
	cout<<fun(n, k);
}
