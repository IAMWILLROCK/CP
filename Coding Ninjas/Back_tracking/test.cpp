#include<bits/stdc++.h>
using namespace std;



vector<string> ans;

bool isAlphabet(char c) {
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return true;
	return false;
}

void helper(string s, string op) {
	if (s.length() == 0) {
		ans.push_back(op);
		return;
	}
	if (isAlphabet(s[0])) {
		char c = s[0]; int x;
		if ((c >= 'a' && c <= 'z')) {
			x = c - 'a';
		}
		if (c >= 'A' && c <= 'Z') {
			x = c - 'A';
		}
		helper(s.substr(1), op + char(x + 'a'));
		helper(s.substr(1), op + char(x + 'A'));
		// cout << char((s[0] - 'a') + 'A') << endl;
	} else {
		helper(s.substr(1), op + s[0]);
	}
}

vector<string> solve(string S) {
	string op;
	helper(S, op);
	return ans;
}


int main() {
	string s = "C";
	solve(s);
	for (auto it : ans) {
		cout << it << " ";
	}
}
