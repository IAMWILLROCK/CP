#include<iostream>
#include<cstring>
using namespace std;

bool check(char ch){
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
		return true;
	} else {
		return false;
	}
}

void removeVowels(string inp){
	for(int i=0; i<inp.length(); ){
		if(check(inp[i])){
			int j;
			j=i;
			while(j<inp.length()){
				inp[j] = inp[++j];
			}
			continue;
		}
		i++;
	}
	cout<<inp<<endl;
}

int main(){
	string input;
	cin >> input;
	removeVowels(input);
}
