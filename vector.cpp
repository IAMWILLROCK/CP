#include<iostream>
#include<vector>
using namespace std;

void fuckker(vector<int> v[], int N, int M){
//	int a[N][M];
//	for(int i=0; i<N; i++){
//		for(int j=0; j<M; j++){
//			a[i][j] = v[i][j];
//		}
//	}
	for(int i=0; i<5; i++){
		for(int j=0; j<4; j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<v.size();
}

int main(){
	vector<int> v[5]; int k=1;
	for(int i=0; i<5; i++){
		vector<int> temp(4);
		v[i] = temp;
		for(int j=0; j<4; j++){
			v[i][j] = k++;
		}
	}
	fuckker(v, 5, 4);
}

