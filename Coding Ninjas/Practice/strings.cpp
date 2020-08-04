#include<iostream>
using namespace std;

int helper(string input, string output[100]){
	if(input[0] == '\0'){
		output[0] = " ";
		return 1;
	}
	
	int size = helper(input.substr(1), output);
	for(int i=0; i< 2*size; i++){
		output[i+size] = output[i] + input[0];
	}
	return 2*size;
}

void getSubs(string input, string output[100]){
	int size = helper(input, output);
	for(int i=0; i<size; i++){
		cout<<output[i]<<endl;
	}
}

int main(){
//	string s;
//	s = "abc";
//	cout << s << endl;
//	string *sp = new string;
//	*sp = "def";
//	cout << sp << endl;
//	cout << *sp << endl;
//	
//	string s1[5];
//	cout << sizeof(s1)/sizeof(string);

	string input = "abc";
	string *output = new string[100];
	getSubs(input, output);
}
