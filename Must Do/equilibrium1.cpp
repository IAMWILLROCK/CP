#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int sum=0, lsum=0;
		for(int i=0; i<n; i++){
			cin >> a[i];
			sum += a[i];
		}
		for(int i=0; i<n; i++){
			sum = sum-a[i];
			lsum = lsum + a[i];
			if(lsum == (sum-a[i+1])){
				cout<<i+1<<endl;
			}
		}
	}
}
