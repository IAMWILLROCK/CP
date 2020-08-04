#include<iostream>
#include<string>
using namespace std;

int getCodes(string input, string output[10000]) {
    /*
    You are given the input text and output string array. Find all possible codes and store in the output string array. Don’t print the codes.
    Also, return the number of codes return to the output string. You do not need to print anything.
    */
	if(input.empty()){
		return 0;
	}
	string o1[5000];
	int smallAns1 = getCodes(input.substr(1),o1);
	for(int i=0;i<smallAns1;i++){
		char x = input[0]-'0'-1+'a';
		o1[i] = input[0] + o1[i];
	}
	for(int i=0;i< (smallAns1);i++){
		output[i] = o1[i];
	}
	return smallAns1;
}






int main(){
//	cout<<'2'+'6'-'0' -1 + 'a';
	string str="1123";
	string output[10000];
	int len = getCodes(str,output);
	for(int i=0;i<len;i++){
		cout<<output[i]<<endl;
	}
}
