#include<iostream>
using namespace std;

int main(){
	string input = "26";
	cout<<char((input[0]-'0')*10 +(input[1]-'0') +'a' -1);
}
