#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n, x;
	cin >> n >> x;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	
	sort(a, a+n);
	
	for(int i=0; i<n; i++)
		cout << a[i] <<" ";
		
	cout<<endl;
	
	for(int i=0; i<n; i++)
		if(i%2 == 0) cout << (a[i]^x )<< " ";
		else cout<<a[i]<<" ";
	
}
