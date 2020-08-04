#include<iostream>
using namespace std;

int main(){
	int m=2,n=3, k=1;
	int a[m][n];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			a[i][j] = k++;
		}
	}
	k=0; int l=0;
	int p=m, q=n;
	int i=0, j=0;
	bool flag = true;
	int tot = 6;
	while(tot>0){
		if(flag){
			for(j; j<q; j++){
				cout<<a[i][j]<<" "<<tot<<endl;
				tot--;
			}
			q--;j--;
			i++;
			for(i; i<p; i++){
				cout<<a[i][j]<<" "<<tot<<endl;
				tot--;
			}
			i--;j--;
			p--;
			flag = !flag;
		} else {
			for(j; j>=l; j--){
				cout<<a[i][j]<<" "<<tot<<endl;
				tot--;
			}
			j++;i--;
			l++;k++;
			for(i;i>=k;i--){
				cout<<a[i][j]<<" "<<tot<<endl;
				tot--;
			}
			i++;j++;
			k++;
			flag = !flag;
		}
	}
}
