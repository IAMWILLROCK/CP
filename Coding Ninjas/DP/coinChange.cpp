#include<iostream>
using namespace std;

int ways(int* d, int num, int v, int** output){
	if(num==0)
		return 0;
	if(v== 0)
		return 1;
	if(v<0)
		return 0;
	if(output[num][v] > -1)
		return output[num][v];
	int first = ways(d, num, v-d[0], output);
	int second = ways(d+1, num-1, v, output);
	output[num][v] = first+second;
	return first+second;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int value;
	cin>>value;
	int output[n+1][value+1];
	for(int i=0; i<n; i++){
		for(int j=0; j<value; j++){
			output[i][j] = -1;
		}
	}
	cout<<ways(a, n, value, output);
}
