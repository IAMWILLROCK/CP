#include <iostream>
using namespace std;

int solve(int a[], int n){
    int count = 0;
    int candidate = 0;
    for(int i=0; i<n; i++){
        if(count == 0){
            candidate = a[i];
            count = 1;
            continue;
        } else {
            if(candidate == a[i])
                count++;
            else 
                count--;
        }
//        cout<<"candidate "<<candidate<<endl;
    }
    
    if(count == 0)
        return -1;
    count = 0;
    for(int i=0; i<n; i++){
        if(candidate == a[i])
            count++;
        
    }
    
    if(count > n/2)
        return candidate;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int a[n];
	    for(int i=0; i<n; i++)
	        cin>>a[i];
	    cout<<solve(a, n)<<endl;
	}
	return 0;
}
