/* Read input from STDIN. Print your output to STDOUT*/
#include<bits/stdc++.h>
using namespace std;


int main(int argc, char *a[])
{
	//Write code here
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		bool prime[1700];
		memset(prime, true, sizeof(prime));
		for(int i=2; i*i <1700; i++){
		if(prime[i]){
			for(int j=i*i; j<1700; j += i)
				prime[j] = false;
		}
	}
		for(int i=0;i<20; i++){
			cout<<prime[i]<<" "<<i<<endl;
		}
		
		cout<<endl;
		int si=1, ei=2;
		while(n){
			if(prime[ei] == true){
				cout<<ei-si<<" ";
				si = ei;
				n--;
			}
			ei++;
		}
	}
	

}

