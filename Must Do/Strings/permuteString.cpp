#include<iostream>
#include<string>
using namespace std;

void permuteHelper(string s, string chosen){
	if(s.empty()){
		cout<<chosen<<" ";
	} else {
		for(int i=0; i<s.length(); i++){
			// choose
			char c = s[i];
			chosen+=c;
			s.erase(i, 1);
			
			//explore
			permuteHelper(s, chosen);
			
			//un-choose
			s.insert(i, 1, c);
			chosen.erase(chosen.length()-1,1);
			
		}
	}
}

void permute(string s){
	permuteHelper(s, "");
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin>>s;
		permute(s);
	}
	
}
