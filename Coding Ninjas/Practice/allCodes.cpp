#include<iostream>
#include<string>
using namespace std;

int getCodes(string input, string output[]){
	if(input.empty()){
		return 1;
	}
	int ans1 = 0, ans2 = 0;
	string o1[500], o2[500];
	ans1 = getCodes(input.substr(1), o1);
	if((input[0]-'0')*10 + (input[1]-'0') <=26 && (input[0]-'0')*10 + (input[1]-'0') >=10){
		ans2 = getCodes(input.substr(2), o2);
	}
	for(int i=0; i<(ans1+ans2); i++){
		if(i<ans1)
			output[i] = char(input[0]-'0'+'a'-1) + o1[i];
		else
			output[i] = char((input[0]-'0')*10 + (input[1]-'0') + 'a' - 1 )+ o2[i-ans1];	
		
	}
	return ans1 + ans2;
}

int main(){
	string input = "111111111111", output[1000];
	int len = getCodes(input, output);
	for(int i=0; i<len; i++){
		cout<<output[i]<<endl;
	}
}
