#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

void remove(string s){
	unordered_set<char> set;
	for(int i=0; i<s.length(); i++){
		if(set.find(s[i])==set.end()){
			set.insert(s[i]);
			cout<<s[i];
		} 
	}
	
}

int main(){
	int t;
	cin>>t;
	cin.ignore();	
	while(t--){
	string s;
	getline(cin, s);
	remove(s);	
	}
	
}
