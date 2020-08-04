#include<iostream>
using namespace std;

int sum(int arr[], int n){
	if(n == 0)
		return arr[0];
	return sum(arr+1, n-1);
}

int main(){
	int arr[] = {1,2,3};
	cout<<sum(arr,3);
}
