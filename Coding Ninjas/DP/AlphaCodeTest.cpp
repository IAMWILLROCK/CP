#include <bits/stdc++.h>
using namespace std;

int num_codes(string inp, long size){
//	cout<<inp<<endl;
    long* output = new long[size+1];                 // 1111111111
    output[0] = 1;
    output[1] = 1;
    for(int i=2;i<=size;i++){
        
		if(inp[i-1]!='0'){
            output[i] = output[i-1]%(10^9 + 7);    
        }
        if((inp[i-2]-'0')*10 + (inp[i-1]-'0') <= 26){
            output[i] = (output[i] +  output[i-2]%(10^9+7))%(10^9+7);
        }
        
    }
    long ans = output[size];
    delete [] output;
    return ans;
}

int main()
{
    string input[100];
    int i;
    string target = "0";
    for(i=0;i<100;i++){
        cin>>input[i];
        if(input[i] == target){
            break;
        }
    }
    for(int x=0;x<i;x++){
        long size = input[x].size();
        cout<<num_codes(input[x],size)<<endl;
    }
}
