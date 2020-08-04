#include<iostream>
using namespace std;


int main(){
	int arr[8][20];
	for(int i=0;i<8;i++){
		for(int j=0;j<i;j++){
			arr[i][j] = j; 
		}
	}
	
	cout<<(arr+1)<<endl;
}
