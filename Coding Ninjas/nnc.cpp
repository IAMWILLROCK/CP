#include<iostream>
using namespace std;

void merge(int a[], int left, int right);

void mergeSort(int a[], int left, int right){
	if(left - right == 0){ // If you have only one element in the array, then it's already sorted
		return;
	}	
	int mid = (left+right)/2;
	mergeSort(a, left, mid); // Go sort the left half
	mergeSort(a, mid+1, right); // Go sort the right half
	merge(a, left, right); // No we have the left and right halves sorted. No combine them in a sorted manner
}

void merge(int a[], int left, int right){
	int* temp = new int[right-left+1]; // Declare a new array with the size of the array that we are currently looking to sort
	int k = 0;
	int i = left; 
	/*
		Here we are starting from left because we say the array as [5,4,3,2,1]. On the top level 
		we call the mergeSort function on [5, 4, 3] and [2, 1]. On the array [2, 1] if we need to 
		access it we can't do a[0] because it starts from index 4 in the given array and that we can
		acheive if use the 'left'.
	 */
	int mid = (left+right)/2;
	int j = mid+1;
	/*
		What i, j, mid mean...?
		i controls the first half meaning [5, 4, 3]
		j controls the second half meaning [2, 1]
		
		Why a new array 'temp' ?
			Creating a new array to copy the elements in the below while loop allows us to have 
			more control as to how the elements are being copied and to fix any error that might arise.
	*/
	while(i <= mid && j <= right){
		if(a[i] < a[j]){ 
			temp[k] = a[i];
			i++;
		}else{
			temp[k] = a[j];
			j++;
		}
		k++;
	}
	/*
		The above while loops ends when we run out of elements in either of two half arrays
		Say we had [1, 4, 5] and [2, 3]. At one point we will have i pointing to element 4 and
		j exceeded right.
	*/
	while(i <= mid){
	/*
		We see from the above scenario that i is at index 3 and is equal to mid which is also 3.
		And we are left with an element int the first half [5]. Copy this to the temporary array
		because isko compare karne koi bacha h nhi. Matlab ye sabse bada hoga.
	*/
		temp[k] = a[i];
		k++;
		i++;
	}
	while(j <= right){
	/*
		Consider this situation first array me saare elements copy kardiye and second half me abhi
		elements baaki h. Iska ek hi matlab h ki second half me jitne bhi elements bache h wo toh 
		sabse bade honi chahiye. Copy them to the temporay array
	*/
		temp[k] = a[j];
		k++;
		j++;
	}
	
	int m=0;
	for(int i=left;i<=right;i++){
		a[i] = temp[m]; // Copying from temporary elements to original array
		m++;
	}
	
	delete [] temp; // Delete the temporary array kyu ki iska kaam khatm hogya
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	mergeSort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
