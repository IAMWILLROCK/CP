#include<iostream>
#include<cmath>
using namespace std;

int subs(string input, string* output){
	if(input.length() == 0){
		output[0] = " ";
		return 1;
	}
	int smallCount = subs(input.substr(1), output);
	for(int i=0; i<smallCount; i++){
		output[i+smallCount] = input[0] + output[i];
	}
	return 2*smallCount;
}

int main(){
	string input;
	cin >> input;
	int x = pow(2, input.length());
	string output[x];
	int count = subs(input, output);
	for(int i=0; i<count; i++){
		cout << output[i] << endl;
	}
}
