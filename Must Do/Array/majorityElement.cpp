#include<iostream>
#include<map>
using namespace std;

int fun(int a[], int n){
    int temp[n], k=0;
    int r = n/2;
    for(int i=0; i<n; i++){
	        for(int j=i+1; j<n; j++){
	           if(a[i] == a[j]){
	               temp[i] ++;
	               if(temp[i] > r){
	                   k++;
	                   return a[i];
	               }
	           }
	        }
	 }
	 if(!k){
	   return -1;
	 }
}
int main()
 {

	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    cout<<fun(a, n)<<endl;
	    

	return 0;
}
