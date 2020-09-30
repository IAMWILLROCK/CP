#include<bits/stdc++.h>
using namespace std;

void helper(int n, int open, int close, string op, vector<string> &ans) {
	if (n == 0) {
		if (open == 0 && close == 0) {
			cout << "Got the answer" << endl;
			ans.push_back(op);
			return;
		}
		return;
	}

	helper(n - 1, open - 1, close, op + '(', ans);
	helper(n - 1, open, close - 1, op + ')', ans);
}

vector<string> generateParanthesis(int n) {
	string op;
	int open = 3;
	int close = 3;
	vector<string> ans;
	cout << "Inside generateParanthes" << endl;
	helper(n * 2, open, close, op, ans);
	return ans;
}

int main() {
	int n = 2;
	vector<string> ans;
	ans = generateParanthesis(n);
	cout << ans.size() << endl;
	for (auto it : ans) {
		cout << it << endl;
	}
}