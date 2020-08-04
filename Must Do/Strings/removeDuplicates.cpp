#include<iostream>
#include<string>
using namespace std;

void removeDup(string str, int indi){
	if(indi == 0){
		cout<<str<<endl;
		return ;
	} else {
		string str1;
		int count = 0, i;
		for(i=0; i<str.length()-1;i++){
			if(str[i] == str[i+1]){
				str1+=str[i];
				count++;
				i++;
			} else {
				str1+=str[i];
			}
		}
		if(str[i] == str[i-1]){
			str1+=str[i];
			count++;
			i++;
		} else {
			str1+=str[i];
		}
		cout<<str1<<" "<<count<<endl;
		removeDup(str1, count);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin>>s;
		removeDup(s,INT_MAX);
	}
}
