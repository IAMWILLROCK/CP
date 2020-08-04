#include<iostream>
using namespace std;

void fun(int a[], int n){
	bool flag = true;
	for(int i=1; i<n-1; i++){
		int j=i;flag = true;
//		cout<<a[i]<<endl;
		for(j; j>=1; j--){
			if(a[j-1]<a[i]){
				continue;
			} else {
				flag = !flag;
				break;
			}
		}

		if(flag){
			j=i;
			for(j;j<n-1;j++){
				cout<<a[i]<<" "<<a[j+1]<<endl;
				if(a[i]<a[j+1]){
					continue;
				} else {
					cout<<a[i]<<" "<<a[j+1]<<endl;
					flag= !flag;
					cout<<endl<<a[i]<<" "<<flag<<" Element and Flag"<<endl;
					break;
				} 
			}
		} else {
			continue;
		}
				
		if(flag){
			cout<<a[i]<<endl;
			return;
		}
	}
	if(flag==false){
		cout<<"-1"<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}	

	fun(a, n);
}

