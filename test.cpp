#include<iostream>
#include<vector>
using namespace std;


int main(){
	vector<vector<int>> v;
	int k=1;
	for(int m=0; m<4; m++){
		for(int n=0; n<5; n++){
			v[m].pushback(k++);
		}
	}
}
