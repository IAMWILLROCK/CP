#include<iostream>
#include<set>
using namespace std;

void findSets(int a[], int b[], int m, int n, int x){
	set<int> s;
	for(int i=0; i<m; i++){
		s.insert(a[i]);
	}
	for(int i=0; i<n; i++){
		if(s.find(x-b[i]) != s.end()){
			cout<< x-b[i] <<" "<<b[i]<<endl;
		}
	}
}

int main(){
	int a[] = {1,7,8,4,6,8}, m=6;
	int b[] = {2,5,9,3,5,7,0}, n=7;
	int x = 8;
	findSets(a,b,m,n,x);
}
