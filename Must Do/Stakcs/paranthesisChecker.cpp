#include<bits/stdc++.h>

using namespace std;

bool check(char ch){
	if(ch=='(' || ch=='[' || ch=='{'){
		return true;
	} else {
		return false;
	}
}

char opposite(char ch){
	if(ch == ')'){
		return '(';
	} else if(ch=='}') {
		return '{';
	} else {
		return '[';
	}
}

void paranthesisChecker(string s){
	stack<char> myStack;
	for(int i=0; i<s.length(); i++){
		if(check(s[i])){
			myStack.push(s[i]);
		} else {
//			cout<<s[i]<<endl;
			char ch = opposite(s[i]);
//			cout<<ch<<endl;
			if(!myStack.empty() && ch == myStack.top()){
				myStack.pop();
			} else {
				cout<<"Not balanced"<<endl;
				return ;
			}
		}
	}
	if(myStack.empty()){
		cout<<"Balanced"<<endl;
	} else {
		cout<<"Not Balanced"<<endl;
	}
}

int main(){
	string s = "}(()){}";
	paranthesisChecker(s);
}
