#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

char* uniqueChar(char *str){
	vector<char> v;
	vector<char>::iterator it;
	int n,x=0;
	n=strlen(str);
	cout<<n;
	for(int i=0;i<n;i++){
		if(find(v.begin(),v.end(),str[i])==v.end()){
			v.push_back(str[i]);
			x++;
		}
	}
	cout<<endl;
	int i=0;
	char *s = new char[x];
	for(it=v.begin();it!=v.end();it++){
		cout<<*it<<endl;
		i++;
	}
	return s;
}

main(){
	char *str = "aabbccddefef";
	cout<<uniqueChar(str);
}
