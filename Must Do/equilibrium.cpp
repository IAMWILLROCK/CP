	#include<iostream>
	using namespace std;
	int main() {
		//code
		int t;
		cin >> t;
		while(t--){
			int n;
			cin>>n;
			int a[n];
			for(int i=0; i<n; i++){
				cin>>a[i];
			} 
			   
			if(n==1){
			    cout<<a[0]<<endl;
			    return 0;
			}
			int i=0, j=n-1; int ans=0;
			int lsum = a[i], rsum=a[j];
			while(j-i >= 2){
				if(lsum == rsum && j-i==2){
					cout<<i+2<<endl;
					ans++;
					break;
				} else if(lsum < rsum){
					i++;
					lsum += a[i];
				} else {
					j--;
					rsum += a[j];
				}
			}
			if(ans==0){
				cout<<-1<<endl;
			}
		}
		return 0;
	}
