#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
//	
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n ; i++){
			cin>>a[i];
		}
//		int a[] = {2, 3,2,1,2,1};
//		int n=6;
		int m = 0;
		int sum = 0;
		while(sum < n){
			m = a[sum];
			sum += m;
			cout<<m<<endl;
			cout<<sum<<endl;
			if(a[sum] == 0){
				int cp = 1;
				for(int i=sum-1; i>=0 ; i--){
					if(a[i] == 0){
					cp++;
					}
				}
				cout<<cp<<endl;
				break;
			}
		}	
//		cout<<sum<<endl;
		if(sum>n)	
			cout<<"Yes"<<endl;
	}
	
}
