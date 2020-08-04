#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printSolution(int solution[][3],int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<solution[i][j]<<" ";
		}
		cout<<endl;
	}
}

void mazeHelp(int maze[][3], int n, int solution[][3], int x, int y){
	if(x==n-1 && y==n-1){
		cout<<"Final Line"<<endl;
		solution[x][y] = 1;
		printSolution(solution, n);
		solution[x][y] = 0;
		return ;
	}
	if(x<0 || y<0 || x>n-1 || y>n-1 || maze[x][y] == 0 || solution[x][y] == 1){
		return ;
	}
	solution[x][y] = 1;
	mazeHelp(maze,n,solution,x-1,y);
	mazeHelp(maze,n,solution,x+1,y);
	mazeHelp(maze,n,solution,x,y-1);
	mazeHelp(maze,n,solution,x,y+1);
	solution[x][y] = 0;
}

void ratInAMaze(int maze[][3], int n){
	int solution[3][3];
	mazeHelp(maze,n,solution,0,0);
}

int main(){
	int n = 3;
	int maze[3][3] = {{1, 0, 1},{1, 1, 1},{1, 1, 1}};
	ratInAMaze(maze, n);	
}
