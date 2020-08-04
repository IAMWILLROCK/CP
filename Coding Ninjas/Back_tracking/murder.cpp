#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	long numbers[n];
	for(int i=0;i<n;i++){
		cin>>numbers[i];
	}
	cout<<endl;
	long sum=0;
	for(int i=1;i<n;i++){
		for(int j=i-1;j>=0;j--){
			if(numbers[i]>numbers[j]){
					sum+=numbers[j];
			}
		}
	}
	cout<<sum<<endl;
	}
	
}
