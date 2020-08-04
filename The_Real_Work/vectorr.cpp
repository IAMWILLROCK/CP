# include <bits/stdc++.h>
using namespace std;
 
int A[3][5],i;

void printingRow(int row){
	for(i=0;i<5;i++){
		cout<<A[row][i]<<" ";
	}
	cout<<endl;
}

main(){
	for(i=0;i<3;i++){
		printingRow(i);
	}
}
