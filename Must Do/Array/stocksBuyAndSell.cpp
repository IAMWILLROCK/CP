#include<iostream>
using namespace std;

void buyAndSell(int a[], int n){
	int si=0,ei=0,ans=0;
	for(int i=0; i<n; i++){
		if(a[i] < a[i+1]){
			if(i == n-1){
				cout<<"("<<si<<" "<<ei<<")"<<" "<<endl;
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
			cout<<"("<<si<<" "<<ei<<")"<<" ";
			ei=i+1;
			si=i+1 ;
			ans++;
		}
		
	}
	if(ans==0){
		cout<<"No Profit"<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	buyAndSell(a, n); 
}
