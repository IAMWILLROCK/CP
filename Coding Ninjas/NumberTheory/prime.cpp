#include<iostream>
using namespace std;

bool checkPrime(int n){
	int count = 0;
	for(int i=1;i<(n) ; i++){
		if(n%i == 0)	
			count++;
//		cout<<n<<" "<<count<<endl;		
	}
	if(count == 1)
		return true;
	
	return false;
}

int primeFinder(int n){
	int count = 0;
	for(int i=2;i<=n;i++){
		if(checkPrime(i)==1){
			count++;
//			cout<<i<<" "<<count<<endl;
		}
	}
	return count;
}

int main(){
	int N = 10;
	cout<<primeFinder(N);
}
