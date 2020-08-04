#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool check(int c, long long positions[], int n, long long d){
	cout << "d: "<<d<<endl;
	c--;
	long long pos = positions[0];
	for(int i = 1; i<n; i++){
		if(c != 0){
			if(positions[i] - pos >= d){
				pos = positions[i];
				c--;
			}
		}
	}
	if(c == 0){
		return true;
	}else{
		return false;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int c;
		cin >> c;
		long long positions[n];
		for(int i=0; i<n; i++){
			cin >> positions[i];
		}
		sort(positions, positions+n);
		long long start = 0;
		long long end = positions[n-1] - positions[0];
		long long ans = -1;
//		cout << "start: "<<start<<"end: "<<end<<endl;
		while(start <= end){
			long long mid = start + (end - start)/2;
			if(check(c, positions, n, mid)){
				ans = mid;
				start = mid + 1;
			} else {
				end = mid - 1;
			}
		} 
		cout << ans << endl;
	}
}
