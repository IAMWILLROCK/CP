#include<iostream>
using namespace std;

	void fun(int a[], int n){
		int i=n-1;
		if(n==1){
			cout<<a[0]<<endl;
			return ;
		}
		int max=0;
		for(i; i>=0; i--){
			if(max < a[i]){
				cout<<a[i]<<" ";
				max = a[i];
			}
		}
	}

int main(){
	
}
