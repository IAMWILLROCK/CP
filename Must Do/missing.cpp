#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin>>n;
		int a[n-1], sum=0;
		for(int i=0; i<n-1; i++){
			cin>>a[i];
			sum += a[i];
		}
		cout<<(((n)*(n+1)/2)-sum)<<endl; 
	}
}
