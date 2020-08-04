#include<bits/stdc++.h>
using namespace std;

int value(char c){
	if(c == 'I')
        return 1;
    else if(c == 'V')
        return 5;
    else if(c == 'X')
        return 10;
    else if(c == 'L')
        return 50;
    else if(c == 'C')
        return 100;
    else if(c == 'D')
        return 500;
    else if(c == 'M')
        return 1000;
    return -1;
}

int fun(string s){
	int res=0;
	for(int i=0; i<s.length(); i++){
		if(i == s.length()-1){
			res += value(s[i]);
			return res;
		} else {
			if(value(s[i]) >= value(s[i+1])){
				res += value(s[i]);
			} else {
				res -= value(s[i]);
			}
		}
	}
}

int main(){
	string s;
	cin >> s;
	cout << fun(s);
}
