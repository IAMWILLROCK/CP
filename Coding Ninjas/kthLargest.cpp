#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kthLargest(vector<int> arr,int n,int k){
	sort(arr.begin(),arr.end());
	vector<int>::iterator it;
	return (find(arr.begin(),arr.end(),arr[n-k]));	
}

main(){
	int n=6;
	vector<int> arr;
	int v[]={9,4,8,7,11,3};
	for(int i=0;i<(sizeof(v)/sizeof(v[0]));i++){
		arr.push_back(v[i]);
	}
	int k=2;
	cout<<kthLargest(arr,n,k);
}
