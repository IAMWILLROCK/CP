#include<iostream>
#include<string>
using namespace std;

int getcodes(string input, string output[10000]){
	if(input.empty()){
		return 0;
	}
	cout<<input.substr(2)<<endl;
	string o1[5000], o2[5000];
	int smallAns1 = getcodes(input.substr(1),o1);
	int smallAns2;
	
	if(((10*(input[0]-'0') + (input[1]-'0') - '0'  )<= 26)){
		smallAns2 = getcodes(input.substr(2),o2);
	}
	for(int i=0;i<smallAns1;i++){
		char x = char(input[0]-'0'+'a'-1);
		o1[i] = x + o1[i];
	}
	for(int i=0;i<smallAns2;i++){
		char x = char((10*(input[0]-'0') + (input[1]-'0') - '0'  ) -1+'a');
		o2[i] = x + o2[i];
	}
	for(int i=0;i< (smallAns1+smallAns2);i++){
		if(i<smallAns1){
			output[i] = o1[i];
		}else{
			output[i] = o2[i-smallAns1];
		}
	}
	return smallAns1 + smallAns2;
}

int main(){
//	cout<<'2'+'6'-'0' -1 + 'a';
	string str="1123";
	string output[10000];
	int len = getcodes(str,output);
	for(int i=0;i<len;i++){
		cout<<output[i]<<endl;
	}
}
