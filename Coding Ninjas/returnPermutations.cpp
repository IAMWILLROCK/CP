#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

int fact(int n){
	if(n==0 || n==1){
		return 1;
	}
	return n*fact(n-1);
}

int returnPermutations(string input, string output[]){
//	cout<<input<<endl<<endl;
	if(input.empty()){
//		cout<<"Base case"<<endl;
output[0] = " ";
		return 1;
	}
	int len;
	for(int i=0;i<input.length();i++){
		
		if(i==0){
			len = returnPermutations((input.substr(0,i) + input.substr(i+1)),output);	
		}else{
			len = returnPermutations((input.substr(0,i-1) + input.substr(i+1)),output);
		}
		for(int j=0;j<len;j++){
			output[i+len] = input[i] + output[i+len];
		}
}
	return fact(input.length());
}

int main(){
	string str = "adg", output[200];
//	cout<<str.length()<<endl;
	int len = returnPermutations(str, output);
	cout<<len<<endl;
	for(int i=0;i<len;i++){
		cout<<output[i]<<endl;
	}
}
