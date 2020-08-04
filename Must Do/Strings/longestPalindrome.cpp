#include<iostream>
using namespace std;

void longestPalindrome(string str){
	int n = str.length();
	bool table[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			table[i][j] = false;
		}
	}
	int maxLength = 0;
	string palindrome;
	//length 1
	for(int i=0; i<n; i++){
		table[i][i] = true;
		if(maxLength < 1){
			maxLength = 1;
			palindrome = str[i];
//			cout<<palindrome<<endl;
		}
	}
	
	//length 2
	for(int i=0; i<n-1; i++){
		if(str[i] == str[i+1]){
			if(maxLength<2){
				maxLength = 2;
				palindrome = str.substr(i,2);
				cout<<palindrome<<endl;
			}
			table[i][i+1] = true;
		}
	}
	
	// length 3
	int j=0;
	for(int k=2; k<n; k++){
		for(int i=0; i<n-k; i++){
			j = i+k;	
			if(str[i] == str[j] && table[i+1][j-1] == true){
//				cout<<str.substr(i, j-i+1)<<endl;ooo
				if(maxLength<k+1){
					maxLength = k+1;
//					cout<<maxLength<<" "<<i<<" "<<j<<endl;
					palindrome = str.substr(i,maxLength);
//					cout<<palindrome<<endl;
				}
			    table[i][j] = true;
			}
			cout<<i<<" "<<str.substr(i, j-i+1)<<" "<<j<<endl;
			
		}		
	}
//		for(int i=0; i<n; i++){
//		for(int j=0; j<n; j++){
//			cout<<table[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	cout<<palindrome<<endl;
	
}

int main(){
	string str;
	cin >> str;
	longestPalindrome(str);
}
