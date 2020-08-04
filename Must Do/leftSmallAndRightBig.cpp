#include<iostream>
using namespace std;

void fun(int a[], int n){
	for(int i=0; i<n-1; i++){
		int x=0;
		for(int j=i+1;j<n; j++){	
			if(a[i] < a[j]){
				x++;
				continue;
				
			} else {
				break;
			}
		}	
		int y=0;
		if(n-i-1 == x){
			for(int j=i-1; j>=0; j--){
				if(a[i] > a[j]){
					y++;				
					continue;
				} else {
					break;
				}
			}
		}
		if(y== i && x==n-i-1){
			cout<<a[i]<<endl;
			return;
		}
	}
	cout<<-1<<endl;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	fun(a, n);
}
