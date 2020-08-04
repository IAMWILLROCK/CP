#include<iostream>
using namespace std;

bool sortCheck(int input[], int size){
	if(size == 0){
		return true;
	}
	if(input[0] > input[1]){
		return false;
	}
	sortCheck(input+1, size-1);
}


// Sum of elements in an array
int sumArray(int a[], int size){
	if(size==1){
		return a[0];
	}
	return a[0]+sumArray(a+1, size-1);
}

// Last index of a number in an Array
int lastIndex(int a[], int size, int x){
	if(size == 0){
		return -1;
	}
	int ans = lastIndex(a+1, size-1, x);
	if(ans == -1){
		if(a[0] == x){
			return 0;
		}
		else {
			return -1;
		}
	}
	return ans+1;
}

int main(){
	int arr[] = {5,5,6,5,6};
	cout << sortCheck(arr,5) << endl;
	cout << sumArray(arr,5) << endl;
	cout <<"Last Index: "<< lastIndex(arr, 5, 5) << endl;
}
