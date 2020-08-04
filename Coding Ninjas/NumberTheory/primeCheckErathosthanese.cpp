#include<iostream>
#include<math.h>
using namespace std;


int main(){
	int N;
	cin>>N;
	bool arr[N+1];
	arr[0] = false;
	arr[1] = false;
	for(int i=2;i<=N;i++){
		arr[i] = true;
	}

	cout<<endl;
	for(int i=2;i*i<=N;i++){
		if(arr[i] == true){
			for(int j=i*i; j<=N; j+=i){
				arr[j] = false;
			}
		}
	}
	
	int count = 0;
	
	for(int i=0;i<=N;i++){
		if(arr[i] == true){
			count ++;
		}
	}
	
	cout<<count;

}
