#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int board[11][11];

bool isPossible(int n, int row, int col){
	
	for(int i=row-1; i>=0; i--){
		if(board[i][col] == 1)
			return false;
	}
	
	for(int i=row-1,j=col+1; i>=0 && j<n ; i--,j++){
		if(board[i][j] == 1)
			return false;
	}
	
	for(int i=row-1,j=col-1; i>=0 && j>=0; i--,j-- ){
		if(board[i][j] == 1)
			return false;
	}
	
	return true;
}

int var=1;

void nQueenHelper(int n, int row){
	if(row==n){
		// Print the board
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cout<<board[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
//		cout<<count<<endl<<endl;
		cout<<var++<<endl;
	return ;
	}
	
	for(int colu=0; colu<n; colu++){
		if(isPossible(n, row, colu)){
			board[row][colu] = 1;
			nQueenHelper(n,row+1);
			board[row][colu] = 0;
		}
	}
	
}

void placeNQueens(int n){
//	memeset(board, 0, 11*11*sizeof(int));
	nQueenHelper(n, 0);
}

int main(){
	int n = 4;
	placeNQueens(n);
}
