#include<iostream>
#include<vector>
using namespace std;

int lbs(int arr[], int size){
	vector<int> v;
	int least=arr[0];
	v.push_back(arr[0]);
	int best=arr[0];
	for(int i=1;i<size;i++){
		if(best<arr[i]){
			v.push_back(arr[i]);
			best = arr[i];
			arr[i] = 0;
		}
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	return -1;
}

int main(){
	int a[] = {15, 20, 20, 6, 4, 2}, size = 6;
	cout << lbs(a, size)<<endl;
}
