#include<iostream>
#include<algorithm>
using namespace std;

void fun(int a[], int n){
	sort(a, a+n);
	for(int i=0; i<n-1; i++){
		for(int j=i+2; j<n; j++){
			if(a[i]+a[i+1] == a[j]){
				cout << "Yes" <<endl;
				return ;
			}
		}
	}
	cout<<"No"<<endl;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
		a[i] = a[i]*a[i];
	}
		
	fun(a, n);
}
