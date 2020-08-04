#include<iostream>
using namespace std;

void printSolution(int solution[][3], int n){
	for(int i=0;i <n; i++){
		for(int j=0; j<n; j++){
			cout << solution[i][j]<< " ";
		}
		cout << endl;
	}
}

void ratInAMazeHelper(int maze[][3],int x, int y, int solution[][3], int n){
	if(x==n-1 && y==n-1){
		solution[x][y] = 1;
		printSolution(solution, n);
		solution[x][y] = 1;
		return ;
	}
	if(x<0 || y>n-1 || x >n-1 || y<0 || solution[x][y]==1 || maze[x][y] == 0){
		return ;
	}
	solution[x][y] = 1;
	ratInAMazeHelper(maze, x+1, y, solution, n);
	ratInAMazeHelper(maze, x, y+1, solution, n);
	ratInAMazeHelper(maze, x-1, y, solution, n);
	ratInAMazeHelper(maze, x, y-1, solution, n);
	solution[x][y] = 0;
}

void ratInAMaze(int maze[][3], int n){
	int solution[3][3];
	ratInAMazeHelper(maze, 0, 0, solution, n);
}

int main(){
	int n = 3;
	int maze[3][3] = {{1, 0, 1},{1, 1, 1},{1, 1, 1}};
	ratInAMaze(maze, n);
}
