#include<iostream>
using namespace std;

int merge(int a[], int si, int ei){
	int mid = (ei+si)/2;
	int inversions=0;
	int i=si,j=mid+1;
	int a1[ei-si+1], k=0;
	while(i<=mid && j<=ei){
		if(a[i] <= a[j]){
			a1[k] = a[i++];
		} else {
			inversions += mid-i+1;
			a1[k] = a[j++];
		}
		k++;
	}
	while(i<=mid){
		a1[k++] = a[i++];
	}
	while(j<=ei){
		a1[k++] = a[j++];
	}
	k=0;
	for(int m=si; m<=ei; m++){
		a[m] = a1[k++];
	}
	return inversions;
}

int mergeGuy(int a[], int si, int ei){
	if(si>=ei){
		return 0;
	}
	
	int mid = (ei+si)/2;
	int ans1 = mergeGuy(a, si, mid);
	int ans2 = mergeGuy(a, mid+1, ei);
	int ans3 = merge(a, si, ei);
	return ans1+ans2+ans3;
}

void inversionCount(int a[], int n){
	cout<<mergeGuy(a, 0, n-1)<<endl;
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	return ;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	inversionCount(a, n);
}
