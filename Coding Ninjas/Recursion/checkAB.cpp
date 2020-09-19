#include<iostream>
using namespace std;

bool checkAB(string s) {
	// cout << s << endl;
	if (s.length() <= 0)
		return true;
	if (s[0] == 'a') {
		if (s[1] == 'b' && s[2] == 'b') {
			return true & checkAB(s.substr(3));
		}
		else return true & checkAB(s.substr(1));

	}

	return false;

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	cout << checkAB(s);
}