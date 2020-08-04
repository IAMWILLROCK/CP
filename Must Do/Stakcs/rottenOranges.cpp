#include<iostream>
#include<queue>
using namespace std;

bool check(int i, int j, int x, int y){
	if(i>=0 && i<x && j>=0 && j<y){
		return true;
	} else {
		return false;
	}
}

int main(){
	int r, c;
	cin>>r>>c;
	int arr[r][c], tot = 0;
	queue<pair<int,int>> q;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin>>arr[i][j];
			if(arr[i][j] == 1 || arr[i][j] == 2){
				++tot;
			}
			if(arr[i][j] == 2 ){
				q.emplace(i,j);
			}
		}
	}
	int count = 0,ct=0;
	while(!q.empty()){
		ct += q.size();
		int s = q.size();
		while(s--){
			pair<int, int> x = q.front();
			q.pop();
			int row = x.first;
			int col = x.second;
			cout<<"row: "<<row<<" "<<"Col: "<<col<<endl; 
			if(check(row+1,col, r, c) && arr[row+1][col] == 1){
				arr[row+1][col] = 2;
				q.emplace(row+1, col);
			}
			if(check(row-1,col, r, c) && arr[row-1][col] == 1){
				arr[row-1][col] = 2;
				q.emplace(row-1, col);
			}
			if(check(row,col+1, r, c) && arr[row][col+1] == 1){
				arr[row][col+1] = 2;
				q.emplace(row, col+1);
			}
			if(check(row,col-1, r, c) && arr[row][col-1] == 1){
				arr[row][col-1] = 2;
				q.emplace(row, col-1);
			}
		}
		++count;
	}
	cout<<ct<<" "<<tot<<endl;
	if(ct == tot){
		cout<<count-1<<endl;
	} else {
		cout<<-1<<endl;
	}
}
