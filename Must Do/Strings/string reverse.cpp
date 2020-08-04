#include<iostream>
#include<string>
using namespace std;

void rev(string s){
	int len = s.length();
	int curr,i;
	curr=i=len-1;
	for(; i>=0; i--){
		if(s[i] == '.'){
			cout<<s.substr(i+1, curr-i);
			cout<<".";
			curr = i-1;
		}
	}
	cout<<s.substr(i+1, curr+1)<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
	string s;
	cin>>s;
	rev(s);	
	}
	
}
