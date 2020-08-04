#include<iostream>
#include<iostream>
using namespace std;

int get_codes(int inp[], int size){
	// Base Case
	if(size == 1)
		return 1;
	if(size == 0)
		return 1;
	
	// Heart	
	int output = get_codes(inp, size-1);
	if(inp[size-2]*10+inp[size-1] <= 26)
		output+=get_codes(inp, size-2);
	return output;
}

int num_codes2(int inp[], int size, int arr[]){
	// Base Case
	if(size == 1)
		return 1;
	if(size == 0)
		return 1;
	// Check in the array
	if(arr[size] > 0){
		return arr[size];
	}
	// Get to Work
	int output = num_codes2(inp, size-1,arr);
	if(inp[size-2]*10+inp[size-1] <= 26)
		output += num_codes2(inp, size-2,arr);
	arr[size] = output;
	return output;
}

int num_codes_i(int inp[], int size){
	int* output = new int[size + 1];
	output[0] = 1;
		output[1] = 1;
	for(int i=2; i<=size; i++){
		if(inp[i] != '0') output[i] = output[i-1];
		if(inp[i-2]*10 + inp[i-1] <= 26){
			output[i] += output[i-2];
		}
	}
	int ans = output[size];
	delete [] output;
	return ans;
}

int main(){
	int inp[] = {1,0};
	int arr[10] = {0,0,0,0,0,0,0,0,0,0};
//	cout<<get_codes(inp, 10)<<endl;
//	cout<<num_codes2(inp, 10, arr)<<endl;
	cout<<num_codes_i(inp,2)<<endl;
	return 0;
}
