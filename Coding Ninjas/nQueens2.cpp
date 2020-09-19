#include<iostream>
using namespace std;

int board[11][11];

void printSolution() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

bool isSafe(int N, int row, int col) {

	for (int i = row - 1; i >= 0; i--) {
		if (board[i][col] == 1)
			return false;
	}
	for (int i = row - 1, j = col + 1; i >= 0 && j < N; i--, j++) {
		if (board[i][j] == 1)
			return false;
	}
	for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
		if (board[i][j] == 1)
			return false;
	}
	return true;
}

void NqueenHelper(int N, int row) {
	if (row == N) {
		return printSolution();
	}
	for (int col = 0; col < N; col++) {
		if (isSafe(N, row, col)) {
			board[row][col] = 1;
			NqueenHelper(N, row + 1);
			board[row][col] = 0;
		}
	}
}

void Nqueen(int N) {
	return NqueenHelper(N, 0);
}

int main() {
	int N = 4;
	Nqueen(N);
}