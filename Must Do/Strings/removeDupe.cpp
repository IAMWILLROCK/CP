#include<iostream>
#include<string>
using namespace std;

void remove(string s){
	int a[26];
	for(int i=0; i<26; i++){
		a[i] = 0;
	}
	for(int i=0; i<s.length(); i++){
		if(s[i] == ' '){
			cout<<" ";
			continue;
		}
//		cout<<a[s[i]-'a']<<endl;
		if(a[s[i]-'a'] == 0){
//			cout<<"Yeah"<<endl;
			a[s[i]-'a']++;
			cout<<s[i];	
		}
	}
}

int main(){
//	int t;
//	cin >> t;
//	while(t--){
	string s;
	getline(cin, s);
	remove(s);
//	}
	
}
