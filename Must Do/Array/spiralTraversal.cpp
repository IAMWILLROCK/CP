#include<iostream>
using namespace std;

int main(){
	int  m = 4, n=4, k=1;
	int a[m][n];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			a[i][j] = k;
			k++;
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<a[i][j]<<" ";
		}
	}
	cout<<endl;
	int l=0, tot = m*n;
	k=0;
	int i=0,j=0;
	bool flag = true;
	while(tot>0){
		if(flag){
			k=0;l=0;
			cout<<"M: "<<m<<" N: "<<n<<endl;
			while(k<n && n>=0 && m>=0){
				cout<<endl<<tot<<endl;
				cout<<i<<" "<<j<<endl;tot--;
//				cout<<a[i][j]<<" "; tot--;
				j++; k++;
			}
			cout<<endl;
			
			n--;i++;j--;m--;
			cout<<"M: "<<m<<" N: "<<n<<endl;
			while(l<m && m>=0 && n>=0){
				cout<<endl<<tot<<endl;
				cout<<i<<" "<<j<<endl;tot--;
//				cout<<a[i][j]<<" "; tot--;
				i++; l++;
			}
			
			cout<<endl;
			m--;i--;j--;
			cout<<"M: "<<m<<" N: "<<n<<endl;
			flag = !flag;
		} else {
			k=0; l=0;
			cout<<"M: "<<m<<" N: "<<n<<endl;
			while(k<n && n>=0 && m>=0){
				cout<<endl<<tot<<endl;
				cout<<i<<" "<<j<<endl;tot--;
//				cout<<a[i][j]<<" "; tot--;
				j--; k++;
			}
			cout<<endl;
			n--;i--;j++;
			cout<<"M: "<<m<<" N: "<<n<<endl;
			while(l<m && m>=0 && n>=0){
				cout<<endl<<tot<<endl;
				cout<<i<<" "<<j<<endl;tot--;
//				cout<<a[i][j]<<" "; tot--;
				i--; l++;
				
			}
			cout<<endl;
			m--;i++;j++;
			cout<<"M: "<<m<<" N: "<<n<<endl;
			flag = !flag;			
		}
	}
}
