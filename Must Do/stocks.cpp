#include<iostream>
using namespace std;

void stocks(int a[], int n){
	int i=0;
	int si=0, ei=0;
	while(i<=n-1){
		if(a[i] <= a[i+1]){
			ei++;
		} else {
			cout<<"("<<si<<" "<<ei<<")"<<" ";
			si = ei = i+1;
		}
		i++;
	}
} 

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	stocks(a, n);
}
