#include<iostream>
#include<algorithm>
using namespace std;

int triples(int a[], int n){
	int count = 0;
	sort(a, a+n);
	while(n-2 >= 0){
		int si = 0, ei=n-2;
		while(si<ei){
			if(a[si] + a[ei] < a[n-1]){
				si++;
			} else if (a[si] + a[ei] > a[n-1]){
				ei--;
			} else {
				count++;
				si++;
				ei--;
			}
		}
		n--;	
	}
	if(!count)
		return -1;
	else 
		return count;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	cout<<triples(a, n);
}
