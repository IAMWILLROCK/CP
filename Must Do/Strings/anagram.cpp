#include<iostream>
#include<string>
using namespace std;



void anagram(string s1, string s2){
	int a1[26], a2[26];

	for(int i=0; i<26; i++){
		a1[i] = 0;
		a2[i] = 0;
	}
	if(s1.length() == s2.length()){
		for(int i=0; i<s1.length(); i++){
			a1[s1[i] - 'a'] += 1;
			a2[s2[i] - 'a'] += 1;
		}
	} else {
		cout<<"NO"<<endl;
		return;
	}
	
	for(int i=0; i<26; i++){
		cout<<a1[i];
		cout<<" "<<a2[i]<<endl;
	}
	
	for(int i=0;i<26;i++){
		if(a1[i] == a2[i]){
			continue;
		} else {
			cout<<"NO"<<endl;
			return ;
		}
	}
	cout<<"YES"<<endl;
	return ;
}

int main(){
	string s1, s2;
	cin >> s1 >> s2;
	anagram(s1, s2);
}
