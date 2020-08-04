#include<iostream>
using namespace std;

int atoi(string s){
	int ans=0, 
	int sign = 1;
	for(int i=0; i< s.length(); i++){
		int num = s[i] - '0';
		if(num >= 0 && num<=9 || s[i]=='-'){
			if(s[i] == '-'){
				sign=-1;
				continue;
			}
			num = s[i] - '0';
			ans = ans*10 + num;
		} else {
			return -1;
		}
	}
	return sign*ans;
}




int main(){
	string s;
	cin>>s;
	cout<<atoi(s);
}
