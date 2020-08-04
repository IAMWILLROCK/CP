#include <iostream>
#include<vector>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> v;
        for(int i=0; i<n; i++){
            string c;
            cin>>c;
            v.push_back(c);
        }
        string h;
        cin >> h;
        int k=0;
        int flag=0;
        for(int i=0; i<n; i++){
            string str = v[i];
            k=0;
            for(int j=0; j<str.length(); j++){
                if(str[j] >= 'A' && str[j]<='Z'){
                    if(str[j] == h[k]){
                        k++;
                    }
                    if(k==h.length()){
                        flag++;
                        cout<<str<<" ";
                        break;
                    }
                }
            }
        }
        if(!flag)
            cout<<"No match found"<<endl;
    }
	return 0;
}
