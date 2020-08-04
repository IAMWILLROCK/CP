#include<iostream>
using namespace std;

void permuteHelper(string s, string chosen){
	if(s.empty()){
		cout<<chosen<<endl;
		return ;
	}
	for(int i=0; i<s.size(); i++){
		char c = s[i];
		s.erase(i,1);
		chosen+=c;
		permuteHelper(s, chosen);
		s.insert(i,1,c);
		chosen.erase(chosen.length()-1,1);
	}
}

void permute(string s){
	string chosen = "";
	permuteHelper(s, chosen);
}

int main(){
	string s = "FARDIN";
	permute(s);
	return 0;
}
