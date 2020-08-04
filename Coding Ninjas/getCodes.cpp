#include<iostream>
#include<string>
using namespace std;

int getCodes(string input,string output[1000]){
	
	if(input.empty()){
		return 1;
	}
	string o1[500], o2[500];
	int s1 = getCodes(input.substr(1),o1);
	int s2 = 0;
	if((input[0]-'0')*10 + (input[1]-'0') <= 26 && (input[0]-'0')*10 + (input[1]-'0')>=10){
		s2 = getCodes(input.substr(2),o2);
	}
	for(int i=0; i<(s1+s2); i++){
		if(i<s1){
			output[i] = char(input[0]-'0' +'a' -1) + o1[i];
		}else{
			output[i] = char((input[0]-'0')*10 + (input[1]-'0') +'a' -1) + o2[i-s1];
		}
	}
	
	return s1 + s2;
}


int main(){
	string str = "1123", output[1000];
//	cout<<((str[0]-'0')*10 + (str[1]-'0'))<<endl;
	int len = getCodes(str, output);
//	cout<<endl<<len<<endl;
	for(int i=0; i<len; i++){
		cout<<output[i]<<endl;
	}
}
