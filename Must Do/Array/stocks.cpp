#include<iostream>
using namespace std;

void stocks(int a[], int n){
	int ei, si, ans;
	si=ei=ans=0;
	for(int i=0; i<=n-1; i++){
		if(a[i] <= a[i+1]){
			if(i == n-1){
				cout<<si<<" "<<ei<<endl;
				ans++;
				break;	
			}
			ei++;
		} else {
			if(si==ei){
				si++;
				ei++;
				continue;
			}
			cout<<si<<" "<<ei<<" ";
			ans++;
			si = ei = i+1;
		}
	}
	if(ans==0){
		cout<<"No Profit"<<endl;
		return;
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	stocks(a, n);
}
