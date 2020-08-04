#include<iostream>
#include<string>
using namespace std;

int subs(string s, string output[]){
	if(s.empty()){
		output[0] = " ";
		return 1;
	}
	int l = subs(s.substr(1), output);
	for(int i=0; i<l; i++){
		output[i+l] = output[i] + s[0];
	}
	return l*2;
}

int main(){
	string s;
	cin>>s;
	string output[1000];
	int len = subs(s, output);
	for(int i=0; i<len; i++){
		cout << output[i]<<endl;
	}
}
