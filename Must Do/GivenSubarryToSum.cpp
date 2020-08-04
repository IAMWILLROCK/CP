#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long N,S;
		cin>>N>>S;
		long long a[N];
		long long currSum=0, start=0;
	
		for(long i=0; i<N; i++){
			cin>>a[i];
			currSum += a[i];
//			cout<<start<<" ";
			cout<<currSum<<" "<<S<<" "<<i<<endl;
			if(currSum>S){
				currSum -= a[start];
				start++;
			}
			if(currSum == S){
				cout<<endl<<(start+1)<<" "<<(i+1)<<endl;
				break;
			}
		}
		if(currSum!=S){
			cout<<-1<<endl;
		}
	}	
}
