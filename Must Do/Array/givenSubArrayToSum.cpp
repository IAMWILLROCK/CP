#include<iostream>
using namespace std;

void summ(int arr[], int n, int sum){
	int i=0, j=0, currSum=0;
	while(j<n && i<j-1){
		if(currSum==sum){
		    cout<<i+1<<" "<<j+1<<endl;
			return ;
		}else if(currSum > sum){
			currSum-=arr[i];
			i++;
		} else {
		    currSum+=arr[j];
			j++;
		}
	}
	
	if(currSum!=sum){
		cout<<-1;
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	int sum=0;
	cin >> sum;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	summ(arr, n,sum );
}
