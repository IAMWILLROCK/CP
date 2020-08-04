
#include<bits/stdc++.h>
using namespace std;

void uniqueChar(string str){
	set<char> s;
	for(int i=0; str[i]!='\0'; i++){
		if(s.find(str[i])==s.end()){
			s.insert(str[i]);
		}
	}
	set<char>::iterator it;
	for(it=s.begin();it!=s.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
}

int main(){
	string str = "aabbccddeeff";
	uniqueChar(str);
}
