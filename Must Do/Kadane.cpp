#include<iostream>
using namespace std;

void kadane(int arr[], int size){
	int sumCurr = 0, sumSFar = arr[0];
	for(int i=0; i<size; i++){
		sumCurr += arr[i];
		cout << sumCurr<<" ";
		if(sumCurr >= sumSFar){
			sumSFar = sumCurr;
		}
		if(sumCurr <= 0){
			sumCurr = 0;
		}
	}
	cout<<endl<<sumSFar<<endl;
}

int main(){
	int arr[] = {-4, -3, -2, -1};
	kadane(arr,4);
}	
