#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int subs(string input,string output[]){
	if(input.empty()){
		output[0] = " ";
		return 1;
	}
	int smallOutput = subs(input.substr(1),output);
	for(int i=0;i<smallOutput;i++){
		output[i+smallOutput] = input[0] + output[i];
	}
	return 2*smallOutput;
}

int main(){
	string input;
	cin >> input;
	int size = pow(2,input.size());
	string output[size];
	int count=subs(input,output);
	for(int i=0;i<count;i++){
		cout<<output[i]<<endl;
	}
}
