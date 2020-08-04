#include<bits/stdc++.h>
using namespace std;

int ed(string s1, string s2){
	cout<<s1<<" "<<s2<<endl;
	if(s1.length() == 0 || s2.length() == 0){
		return 0;
	}
	if(s1[0] == s2[0])
		return ed(s1.substr(1), s2.substr(1));
	else{
		int o1 = 1 + ed(s1, s2.substr(1));
		int o2 = 1 + ed(s1.substr(1), s2.substr(1));
		int o3 = 1 + ed(s1.substr(1), s2);
		return min(o1, min(o2, o3));
	}
}


int main(){
	string s1, s2;
	cin >> s1 >> s2;
	cout<<ed(s1, s2)<<endl;
}
