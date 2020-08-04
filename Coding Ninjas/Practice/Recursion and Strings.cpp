#include<iostream>
using namespace std;

// Replace Character
void replaceCharacter(char input[], char c1, char c2){
	if(input[0] == '\0'){
		return ;
	}
	if(input[0] == c1){
		input[0] = c2;
	}
	replaceCharacter(input+1, c1, c2);
}

// Length of the string
int length(char str[]){
	if(str[0] == '\0')
		return 0;
	int ans = length(str+1);
	return ans+1;
}

// Removing a character
void removeX(char s[]){
	if(s[0] == '\0')
		return ;
	if(s[0] == 'x'){
		int i=0;
		while(s[i] != '\0'){
			s[i] = s[i+1];
			i++;
		}
	}
	removeX(s+1);
}


int main(){
	char str[] = "abacd";
	replaceCharacter(str, 'a', 'x');
	cout<<str<<endl;
	cout<<length(str)<<endl;
	removeX(str);
	cout<<str;
}
