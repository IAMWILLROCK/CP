#include<iostream>
using namespace std;

int rsum(int num){
	int sum;
	if(num==0){
		return 0;
	}
	return num%10 + rsum(num/10);
}

main(){
	int n=5;
	int num = 336;
	cout<<rsum(num);
}
