#include<iostream>
using namespace std;

int main(){	
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int leftMin[n], rightMax[n];
	int left_min = a[0], right_max = a[n-1];
	for(int i=0; i<n; i++){
		if(a[i] < left_min){
			left_min = a[i];
		}
		leftMin[i] = left_min;
	}
	for(int i=n-1; i>=0; i--){
		if(a[i] > right_max){
			right_max = a[i];
		}
		rightMax[i] = right_max;
	}
	for(int i=0; i<n; i++){
		cout<<leftMin[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<n; i++){
		cout<<rightMax[i]<<" ";
	}
	cout<<endl;
	int i=0,j=n-1, maxDiff=0;
	while(i<j){
		if(leftMin[i] <= rightMax[j]){
			maxDiff = max(maxDiff, j-i);
			j--;
		}else{
			i++;
		}
	}
	cout<<max<<endl;
}

