#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void mazeHelper(int maze[][3], int n, int solution[][3], int x, int y){
	if(x == n-1 && y == n-1){
		// Print the Solution
		solution[x][y] = 1;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cout<<solution[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return ;
	}
	
	if(x<0 || y<0 || x>n-1 || y>n-1 || maze[x][y] == 0 || solution[x][y] == 1){
		return ;
	}
	
	solution[x][y] = 1;
	mazeHelper(maze, n, solution, x-1, y);
	mazeHelper(maze, n, solution, x+1, y);
	mazeHelper(maze, n, solution, x, y-1);
	mazeHelper(maze, n, solution, x, y+1);
	solution[x][y] = 0;
}

void ratInAMaze(int maze[][3], int n){
	int solution[3][3];
	mazeHelper(maze, n, solution, 0, 0);
}

int main(){
	int n = 3;
	int maze[3][3] = {{1, 0, 1},{1, 1, 1},{1, 1, 1}};
	ratInAMaze(maze, n);	
}
