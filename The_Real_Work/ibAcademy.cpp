#include<iostream>
#include<vector>
using namespace std;

void solve(vector<bool> &ans, int n){
	int i=0;
	while(ans[i+2]!=false){
		i=(i+2)%n;
		ans.pop_back(i);
		i++;
	}	
}

int main(){
	int n;
	cin >> n;
	vector<bool> ans;
	for(int i=0; i<n; i++){
		ans.push_back(true);
	}
	solve(ans, n);
	vector<int> res;
	for(int i=0; i<n; i++){
		if(ans[i])
			res.push_back(i+1);
	}
	for(int i=0; i<n; i++)
		cout<<res[i]<<" ";
}
