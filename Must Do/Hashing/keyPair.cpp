#include<iostream>
#include<set>
using namespace std;

int getResult(int a[], int n){
   set<int> s;
   int sum=0;
   for(int i=0; i<n; i++){
   	cout<<"Sum: "<<endl;
       for(int j=i+1; i<n; i++){
            sum = a[i]+a[j];
            
            cout<<sum<<" ";
            if(s.find(sum) == s.end())
                s.insert(sum);
            else{
            	cout<<"In the else part"<<endl;
                return 1;
            }
       }
   }
//   set<int>::iterator it;
//   for(it=s.begin();it!=s.end(); it++){
//   		cout<<*it<<" ";
//   }
   return 0;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    cout<<getResult(a, n)<<endl;
	}
	return 0;
}
