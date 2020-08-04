#include<iostream>
using namespace std;

void swapper(int a[], int i, int j){
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

int partition(int a[], int si, int ei){
	int p = a[si], count = 0;
	for(int i=si+1; i<=ei; i++){
		if(a[i]<p){
			count++;
		}
	}
	int c = si+count;
	swapper(a, si, c);
	int i=si, j=ei;
	while(i<=c-1 && j>=c+1){
		if(a[i] > a[c]){
			if(a[j] < a[c]){
				swapper(a, i, j);
				i++;
				j--;
			} else {
				j--;
			}
		} else {
			i++;
		}
	}
	return c;
}

void quickSortHelper(int a[], int si, int ei, int k){
	if(si==ei){
		cout<<a[si];
		return ;
	}
	int c = partition(a, si, ei);
	cout<<c<<" "<<k-1<<endl;
	if(c==k-1){
		cout<<a[c]<<endl;
		return ;
	}
	if(c > k-1){
		quickSortHelper(a, si, c-1, k);
	} else {
		quickSortHelper(a, c+1, ei, k);
	}
}

void quickSort(int a[], int n, int k){
	quickSortHelper(a, 0, n-1, k);
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}	
	quickSort(a, n, 3);
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
