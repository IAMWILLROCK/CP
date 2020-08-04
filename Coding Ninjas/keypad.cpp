#include<iostream>
#include<map>
#include<string>
using namespace std;

map<int, string> m {{2,"abc"},{3,"def"},{4,"ghi"},{5,"jkl"},{6,"mno"},{7,"pqrs"},{8,"tuv"},{9,"wxyz"}};

int keypad(int num, string output[]){
	if(num == 0){
		output[0] = " ";
		return 1;
	}
	int smallAns = keypad(num/10,output);
	for(int i=1;i<m[num%10].size();i++){
		for(int j=0;j<smallAns;j++){
			output[j+ (i*smallAns)] = output[j] + m[num%10][i];
		}
	}
	for(int j=0;j<smallAns;j++){
		output[j] += m[num%10][0];
	}
	return smallAns * (m[num%10].size());
}

int main(){
	int num = 23;
	string output[100];
	int count = keypad(num, output);
	cout<<count<<endl;
	for(int i=0;i<count;i++){
		cout<<output[i]<<endl;
	}	
}
