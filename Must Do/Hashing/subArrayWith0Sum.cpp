#include<iostream>
#include<map>
using namespace std;

int fun(int a[], int n){
	    int sum[n];
    int run = 0;
    map<int, int> m;
    int max = -1;
    for(int i=0; i<n; i++){
        run+=a[i];
        sum[i] = run;
    }
    for(int i=0; i<n; i++){
        if(m.find(sum[i]) == m.end()){
            m.insert(make_pair(sum[i], i));
            continue;
        }
        if(max < (i-m[sum[i]])) 
            max = (i-m[sum[i]]);
            
    }
    return max;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	cout<<fun(a, n)<<endl;
}
