#include<bits/stdc++.h>

using namespace std;

int getzeros(int num, int n){
	int count = 0;
	while(num){
		count += num&1;
		num >>= 1;
	}
	cout<<n-count<<endl;
	return n - count;
}

int solve(int n, vector<int>bitStrings){
	int k = bitStrings.size();
	int x = 0;
	int ans = 0;
	int final_number = 0;
	for(int i=0; i<k; i++){
		x = getzeros(bitStrings[i], n);
		ans += pow(2,x);
		final_number = final_number | bitStrings[i];
	}
	return ans - pow(2, getzeros(final_number, n));
}

int main(){
	int n;
	int k;
	cin >> n >> k;
	vector<int> bitStrings;
	for(int i=0; i<k; i++){
		int temp;
		cin >> temp;
		bitStrings.push_back(temp);
	}
	cout<<solve(n, bitStrings)<<endl;
}
