 #include<iostream>
 using namespace std;	
	int longestBitonicSubarray(int *input, int n) {
		
	/* Don't write main().
     	* the input is already passed as function argument.
     	* Taking input and printing output is handled automatically.
     	*/
     	
    int inc[n]; 
    int dec[n];  
    int i, max; 
    for(int i=0; i<n; i++){
   	 inc[i]=1;dec[i]=1;
    }
    for (i = 1; i < n; i++){
    	
     	for(int j=i-1; j>=0; j--){
            if(input[i] >input[j] && inc[i]<=inc[j]){
//            	cout<<i<<" "<<"Inc[i]: "<<inc[i]<<" "<<j<<" "<<inc[j]<<endl;
                inc[i] =inc[j]+1;
            }
        }
        
    } 
    for(int k=0; k<n; k++){
		cout<<inc[k]<<" ";
	}
	cout<<endl;
    for (i = n-2; i >= 0; i--){
       for(int j=i+1; j<n; j++){
            if(input[i] > input[j] && dec[j] >= dec[i]){
                dec[i]=dec[j]+1;
            }
        }
    } 
     for(int k=0; k<n; k++){
		cout<<dec[k]<<" ";
	}
	cout<<endl;    
        
        
    max = inc[0] + dec[0] ; 
    for (i = 1; i < n; i++) 
        if (inc[i] + dec[i]  > max) 
            max = inc[i] + dec[i]; 
  
    return max;
     	
 	}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	cout<<longestBitonicSubarray(a, n);
}
